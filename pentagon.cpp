// Copyright (c) 2022 Marshall Demars All rights reserved

// Created by: Marshall Demars
// Created on: Dec 2022
// This program finds the perimeter of a pentagon

#include <iostream>

int PerimeterCalculation(int length) {
    // This function finds the perimeter of a pentagon
    int perimeter;

    // Process
    perimeter = length * 6;

    return perimeter;
}

int main() {
    // This function gets the length from the user
    std::string length_as_string;
    int length_as_int;
    int perimeter;

    // Input
    std::cout << "Enter the length of one of the hexagons sides (cm): ";
    std::cin >> length_as_string;

    try {
        length_as_int = std::stoi(length_as_string);
        // Call function
        perimeter = PerimeterCalculation(length_as_int);
        std::cout << "\nThe perimeter of a pentagon with the side lengths of "
                  << length_as_int << " cm is " << perimeter << " cm.";
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
