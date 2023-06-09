#include <iostream>

int main()
{
    // Type Conversion: conversion of a value of one data type to another implicit = automatic, explicit = precede value with new data type.
    double x = (int)3.14; // the .14 is truncated because we converted the double into an int

    std::cout << x;
    std::cout << "\n";
    std::cout << (char)100; // since it is a character we are outputting the hashkey value of 100 which is d
    std::cout << "\n";

    // actual use case for it would be finding the grade of a student on a test

    int correctAnswers = 8;
    int questions = 10;
    double score = correctAnswers / (double)questions * 100; // if it wasnt for the type conversion the output would truncate into 0 because 8 / 10 = 0.8 but since we turned the 10 into a double it allows us to multiply it by the 100 and 80

    std::cout << score << "%";

    return 0;
}