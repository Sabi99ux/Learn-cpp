/*
Disclaimer:
Ini bukan UUID standar.
Ini adalah generator ID acak berbasis hex untuk kebutuhan internal.
*/

#include <iostream>
#include <random>
#include <sstream>
#include <iomanip>

std::string uuid_generator() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 15);

    std::stringstream ss;

    for (int i = 0; i < 32; i++) {
        ss << std::hex << dis(gen);
        if (i == 7 || i == 11 || i == 15 || i == 19)
            ss << "-";
    }

    return ss.str();
}