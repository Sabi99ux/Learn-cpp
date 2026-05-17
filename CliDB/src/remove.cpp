#include <fstream>
#include <iostream>
#include <string>
#include "../include/json.hpp"

using json = nlohmann::json;

int remove() {

    std::string uuid;

    std::ifstream file("./data/data.json");

    if (!file.is_open()) {
        std::cout << "Failed open file!\n";
        return 1;
    }

    json data;
    file >> data;
    
    file.close();

    std::cout << "Enter UUID : ";
    std::getline(std::cin, uuid);

    bool found = false;

    auto& users = data["users"];

    for (auto it = users.begin(); it != users.end(); ++it) {

        if ((*it)["uuid"] == uuid) {

            users.erase(it);

            found = true;

            break;
        }
    }

    if (!found) {

        std::cout << "Data not found!\n";

        return 1;
    }

    std::ofstream outFile("./data/data.json");

    outFile << data.dump(4);

    outFile.close();

    std::cout << "User deleted successfully!\n";

    return 0;
}