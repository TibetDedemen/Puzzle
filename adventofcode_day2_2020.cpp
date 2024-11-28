#include <iostream>
#include <string>
#include <algorithm>
int main() {
    int min, max, valid {0};
    char dash, letter, ddots;
    std::string password;
    std::cout << "Enter: ";
    for (int i {0}; i < 5000; i++) {
        std::cin >> min >> dash >> max >> letter >> ddots >> password;

//        int count = std::count(password.begin(), password.end(), letter);

//        if (count >= min && count <= max) {
//            valid = valid + 1;
            if ((password.at(min - 1) == letter && password.at(max - 1) != letter) || (password.at(min - 1) != letter && password.at(max - 1) == letter)) {
                valid = valid + 1;
            }
        
//        } else {
//            continue;
//        }
//        std::cout << password.at(min - 1) << " " << password.at(max - 1) << "\n";
//        }
    }
    std::cout << "\n";
    std::cout << "There are " << valid << " valid passwords in the list!\n";
    
    std::cout << "\n";
    return 0;
}

//            valid = valid + 1;

//            std::cout << "The password is valid. It has " << count << " " << letter << " characters.\n";

//            std::cout << "The password is invalid.\n";

//        std::cout << "Parsed values:\n";
//        std::cout << "Min: " << min << "\n";
//        std::cout << "Max: " << max << "\n";
//        std::cout << "Letter: " << letter << "\n";
//        std::cout << "Password: " << password << "\n";
