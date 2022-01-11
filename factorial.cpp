// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 7, 2022
// This program allows a user select a positive number and
// then calulate the factorial of it
#include <iostream>
#include <iomanip>


int main() {
  int numberCounter = 0;
  int total = 1;
  int userNumInt;
  std::string userNum;

  std::cout << " \n";
  std::cout << "This program will calculate the factorial of ";
  std::cout << "a chosen positive number.\n";
  std::cout << " \n";
  std::cout << "Enter a positive number: ";
  std::cin >> userNum;
  std::cout << " \n";

  try {
      // Make sure user input is an integer
        userNumInt = std::stoi(userNum);

        // Makes sure that user number is positive
      if (userNumInt >= 0) {
        // Loop that calculates the factorial of the number
        do {
        numberCounter = numberCounter + 1;
        total = total * numberCounter;
        std::cout << "Tracking " << numberCounter;
        std::cout << " times through the loop\n";
        } while (numberCounter < userNumInt);
        // Print final result
        std::cout << " \n";
        std::cout << "The factorial of ";
        std::cout << userNum << " is " << total;

      } else {
          std::cout << userNumInt << " is not a positive number.\n";
      }
      } catch (std::invalid_argument) {
              std::cout << userNum << " is not a number\n";
      }
}
