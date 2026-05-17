#include <iostream>
#include "include/add.hpp"
#include "include/search.hpp"
#include "include/remove.hpp"

int main() {

    std::string choice;

    while(true) {

        std::cout << "\n---------- Student data collection ----------\n";
        std::cout << "add    - tambah data\n";
        std::cout << "remove - hapus data\n";
        std::cout << "search - cari data\n";
        std::cout << "exit   - keluar\n";
        std::cout << "Choose your choice : " << '\n' ;
        std::getline(std::cin, choice) ;

        if (choice == "add") {
            int value = add();
        }
        else if (choice == "remove") {
            int value = remove();
        } 
        else if (choice == "search") {
            int value = search(); 
        }
        else if (choice == "exit") {
            break;
        }
        else {
            std::cout << "Invalid selection";
        }

    }

    return 0 ;
}