#include <fstream>
#include <iostream>
#include <string>
#include "../include/json.hpp"

using json = nlohmann::json;

int search() {

    std::string uuid ;

    std::ifstream file("./data/data.json");

    json data;
    file >> data;

    std::cout << "Enter UUID : " ;
    std::getline(std::cin, uuid);

    bool found = false;

    for (const auto& user : data["users"]) {

        if (
            user.contains("uuid") &&
            user["uuid"] == uuid
        ) {
            std::cout << user.dump(4) << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Data not found!\n" ;
    }

    return 0;
}