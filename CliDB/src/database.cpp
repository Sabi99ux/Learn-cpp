#include <fstream>
#include <filesystem>

void initDatabase() {

    std::filesystem::create_directory("data");
    std::ifstream check("data/data.json");

    if (!check.good()) {
        std::ofstream file("data/data.json");
        file << "[]";
    }
}
