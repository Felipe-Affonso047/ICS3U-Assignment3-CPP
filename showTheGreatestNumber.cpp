// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program gets 3 numbers as input and shows the greater one

#include <iostream>
#include <cmath>
#include <iomanip>
#include <random>

int main() {
    std::string number1_input;
    std::string number2_input;
    std::string number3_input;
    float number1_float;
    float number2_float;
    float number3_float;

    std::cout << "Insert 3 numbers:" << std::endl;

    std::cin >> number1_input;
    std::cin >> number2_input;
    std::cin >> number3_input;

    try {
        number1_float = std::stold(number1_input);
        number2_float = std::stold(number2_input);
        number3_float = std::stold(number3_input);

        if (number1_float > number2_float) {
            if (number1_float > number3_float) {
                std::cout << "\nThe greatest number is: " << number1_input <<
                std::endl;
            } else {
                std::cout << "\nThe greatest number is: " << number3_input <<
                std::endl;
            }
        } else {
            if (number2_float > number3_float) {
                std::cout << "\nThe greatest number is: " << number2_input <<
                std::endl;
            } else {
                std::cout << "\nThe greatest number is: " << number3_input <<
                std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, please, insert a number."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
