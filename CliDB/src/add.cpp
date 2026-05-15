#include <string>
#include <iostream>
#include <limits>
#include <fstream>
#include <filesystem>
#include "../include/json.hpp"
#include "../include/uuid_generator.hpp"

using json = nlohmann::json;

int inputInt(const std::string& text) {
    int value;

    while (true) {
        std::cout << text;

        if (std::cin >> value) {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            return value;
        }

        std::cout << "Only numbers allowed!\n";

        std::cin.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );
    }
}

int add() {

    std::filesystem::create_directory("data");

    json data;
    std::ifstream input("data/data.json");

    if (input.is_open() && input.peek() != std::ifstream::traits_type::eof()) {
        input >> data;
    } else {
        data["users"] = json::array();
    }

    std::string uuid = uuid_generator();
    std::string name;
    std::string university;
    std::string major;
    std::string degree;
    std::string email;


    std::cout << "Enter your name : " ;
    std::getline(std::cin, name) ;

    int age = inputInt ("Enter your age : ");

    std::cout << "Enter your university : " ;
    std::getline(std::cin, university) ;

    std::cout << "Enter your major : " ;
    std::getline(std::cin, major) ;

    std::cout << "Enter your degree : " ;
    std::getline(std::cin, degree) ;
    
    int semester = inputInt ("Enter your semester : ");

    std::cout << "Enter your email : " ;
    std::getline(std::cin, email) ;

    data["users"].push_back({
        {"uuid", uuid},
        {"name", name},
        {"age", age},
        {"university", university},
        {"major", major},
        {"degree", degree},
        {"semester", semester},
        {"email", email}
    });

    std::ofstream output("data/data.json");
    output << data.dump(4);
    output.close();

    std::cout << "\nData saved successfully\n";

    return 0;
}