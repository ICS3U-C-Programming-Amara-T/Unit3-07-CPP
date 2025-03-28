// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: March 28, 2025
// This is a dating program where you have to be
// greater than 25 but younger than 40.

#include <iostream>
#include <string>

main() {
    // Define variables
    std::string ageAsString;
    int ageAsNumber;

    // Ask user for age
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;

    // Check if the user's age matches the grandparents' criteria
    try {
        ageAsNumber = std::stoi(ageAsString);
        if (ageAsNumber >= 25 && ageAsNumber <= 40) {
            std::cout << "Your age is: " << ageAsNumber
            << " You can date my Grandchild.\n";
            std::cout << "\n";
        } else {
            std::cout << "Your age is: " << ageAsNumber
            << " You cannot date my Grandchild.\n";
            std::cout << "\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid age ";
    }
}
