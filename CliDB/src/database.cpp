#include <fstream>

void initDatabase() {
    std::ifstream check("data/data.json");

    if (!check.good()) {
        std::ofstream file("data/data.json");
        file << "[]";
    }
}