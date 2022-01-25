// Copyright (c) 2022 Jedidiah Alfred-Aigbe All rights reserved.
//
// Created By: Jedidiah
// Date: Jan 20, 2021
// This program converts celsius to  fahrenheit.
#include <iostream>


void CalculateFahrenheit() {
    // declare variables
    std::string userString;
    float celsius;
    float fahrenheit;
    // get temperature in celsius
    std::cout << "Enter the temperature in celsius: ";
    std::getline(std::cin, userString);
    std::cout << std::endl;
    // error checking
    try {
        celsius = std::stof(userString);
        fahrenheit = (9.0 / 5.0) * celsius + 32;
        std::cout << celsius << " in fahrenheit is " << fahrenheit;
    }catch (std::invalid_argument) {
        std::cout << "Invalid input.\n";
    }
}


int main() {
    // call function
    CalculateFahrenheit();
}
