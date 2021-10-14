// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Oct 2021
// This Program is about level
#include <iostream>
#include <string>

int CheckLevel(std::string levelString) {
    // This Program check the level
    int answerString;

    // process
    if (levelString == "4+") {
        answerString = 97;
    } else if (levelString == "4") {
        answerString = 90;
    } else if (levelString == "4-") {
        answerString = 84;
    } else if (levelString == "3+") {
        answerString = 78;
    } else if (levelString == "3") {
        answerString = 75;
    } else if (levelString == "3-") {
        answerString = 71;
    } else if (levelString == "2+") {
        answerString = 68;
    } else if (levelString == "2") {
        answerString = 64;
    } else if (levelString == "2-") {
        answerString = 61;
    } else if (levelString == "1+") {
        answerString = 58;
    } else if (levelString == "1") {
        answerString = 54;
    } else if (levelString == "1-") {
        answerString = 51;
    } else if (levelString == "R") {
        answerString = 0;
    } else {
        answerString = -1;
    }

    return answerString;
}

main() {
    // This function just call other functions
    std::string userString;
    int checkLevel;

    std::cout << "Please enter your level(ex. 4+ or R): ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // call functions
    checkLevel = CheckLevel(userString);

    // output
    std::cout << "Your secore percentage is " << checkLevel << "%" << std::endl;

    std::cout << "\nDone." << std::endl;
}
