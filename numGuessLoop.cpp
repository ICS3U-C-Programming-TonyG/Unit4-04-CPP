// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-04-26

// Description: Random number guessing game with loops

#include <iostream>
#include <random>
#include <string>

int main() {
    // This program generates a random number and asks the user to guess it
    // until they guess correctly, using a loop and a break statement.

    std::string userInput;
    int userGuess;
    int correctNumber;

    // Generate a random number between 1 and 10 using <random>
    std::random_device rseed;
    std::mt19937 rgen(rseed());                       // Mersenne Twister engine
    std::uniform_int_distribution<int> idist(1, 10);  // Range [1, 10]
    correctNumber = idist(rgen);

    std::cout << "Guess the number between 1 and 10!" << std::endl;

    while (true) {
        // Input
        std::cout << "Enter your guess: ";
        std::cin >> userInput;

        try {
            // Convert input to an integer
            userGuess = std::stoi(userInput);

            // Process & Output
            if (userGuess == correctNumber) {
                std::cout << "You guessed correctly!" << std::endl;
                break;  // Exit the loop when the correct number is guessed
            } else {
                std::cout << "Incorrect guess. Try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "That was not a valid integer." << std::endl;
        }
    }
}
