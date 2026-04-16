/*
 * File: age_validator.cpp
 * Description: Program to classify your age
 */

#include <iostream>
#include <cstdint>
#include <limits>

namespace validation
{
    const std::uint8_t ADULT_AGE_LIMIT = 18;
    const std::uint8_t SENIOR_AGE_LIMIT = 65;

    bool isAdult(std::uint8_t age)
    {
        return age >= ADULT_AGE_LIMIT;
    }

    bool isSenior(std::uint8_t age)
    {
        return age >= SENIOR_AGE_LIMIT;
    }
}

int main()
{
    const std::uint8_t MAX_AGE = 120;
    int age = 0;

    std::cout << "Please enter your age: ";
    
    if (!(std::cin >> age))
        {
            std::cout << "You did not enter a valid number. Please try again." << '\n';
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
}