// https://www.udemy.com/course/beginning-c-plus-plus-programming/?couponCode=BFCMSALE24FRTR
// 90_Section_Challenge
// This challenge is about using a  collection (list) of integers and allowing the user to select options from a menu to perform operations on the list.

// Your program should display a menu options to the user as follows:

// P - Print numbers
// A - Add number
// M - Display mean of the numbers
// S - Display the smallest number
// L - Display the largest number
// Q - Quit

// Enter your choice: 

// The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
// If an illegal choice is made, you should display "Unknown selection, please try again" and the menu options should be displayed again.

// If the user enters 'p' or 'P' you should display all of the elements in the list.
// If the list is empty you should display "[] - the list is empty"
// If the list is not empty then all the list elements should be displayed inside square brackets separated by a space
// For example [1,2,3,4,5]

// If the user enters 'a' or 'A' then you should prompt the user for an integer to add to the list which you will add to the list and then display
// it was added. For example, if the user enters 5 you should display "5 added"
// Duplicate list entries are OK.

// If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
// If the list is empty you should display, "Unable to calculate the mean - no data"

// If the user enters 'S' or 's' you should display the smallest element in the list. For example, if the list contains [2 4 5 1] you should display "The smallest number is 1"
// If the list is empty you should display, "Unable to determine the smallest number - list is empty"

// If the user enters 'L' or 'l' you should display the largest element in the list. For example, if the list contains [2 4 5 1] you should display "The largest number is 5"
// If the list is empty you should display, "Unable to determine the largest number - list is empty"

// If the user enters 'Q' or 'q' you should display "Goodbye" and the program should terminate

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec;
    char menu;
    int x, mean, total;
    do {
        std::cout << "=====Welcome to the Collection List=====\n";
        std::cout << "P - Print numbers\n";
        std::cout << "A - Add number\n";
        std::cout << "M - Display mean of the numbers\n";
        std::cout << "S - Display the smallest number\n";
        std::cout << "L - Display the largest number\n";
        std::cout << "Q - Quit\n";
        std::cout << "\n";
        std::cout << "\nEnter your choice: ";
        std::cin >> menu;
        if (menu == 'p' || menu == 'P') {
            if(vec.empty()) {
                std::cout << "[] - the list is empty\n";
            } else {
                std::cout << "[ ";
                for (unsigned int i{0};i < vec.size(); i++) {
                    std::cout << vec.at(i) << " ";
                }
                std::cout << " ]";
                std::cout << "\n";
            }
        } else if (menu == 'a' || menu == 'A') {
            std::cout << "Enter an integer: ";
            std::cin >> x;
            vec.push_back(x);
            std::cout << x << " added.\n";
        } else if (menu == 'm' || menu == 'M') {
            if (vec.empty()) {
                std::cout << "Unable to calculate the mean - no data\n";
            } else {
                for (unsigned int i{0}; i < vec.size(); i++) {
                    total = total + vec.at(i);
                }
                mean = total / vec.size();
                std::cout << "Mean is: " << mean << "\n";
            }
        } else if (menu == 's' || menu == 'S') {
            if (vec.empty()) {
                std::cout << "Unable to determine the smallest number - list is empty\n";
            } else {
                auto min = std::min_element(vec.begin(), vec.end());
                std::cout << "Smallest number is " << *min << "\n"; // min should be dereferenced with *.
            }
        } else if (menu == 'l' || menu == 'L') {
            if (vec.empty()) {
                std::cout << "Unable to determine the largest number - list is empty\n";
            } else {
                auto max = std::max_element(vec.begin(), vec.end());
                std::cout << "Largest number is " << *max << "\n"; // max should be dereferenced with *.
            }
        } else if (menu == 'q' || menu == 'Q') {
            std::cout << "Goodbye!\n";
        } else {
            std::cout << "Unknown selection, please try again\n";
        }

    } while (menu != 'q' && menu != 'Q');
    
    return 0;
}

// int smallest = vec.at(0);
// for (auto num : vec);
    // if (num < smallest)
        // smallest = num;
// std::cout << "The smallest number is: " << smallest << "\n";
