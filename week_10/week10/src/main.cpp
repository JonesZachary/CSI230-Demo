/**
* @file main.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Zachary Jones
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits  Found out how to generate a random seed here: https://www.cplusplus.com/reference/cstdlib/rand/
* 
*/

#include "util.h"

int main()
{
    // Initialized a vector with five string objects
    vector<string> stringVector { "Hello there", "This is a secret message", "Beep Boop", "How about this weather?", "I give up :(" };

    // Call the randomElement function 
    randomElement(stringVector);

    // Initialized a vector with five random double values
    vector<double> doubleVector { 2.85725, 9.871, 13.231, 5.5555, 10.86421 };

    // Call the avg function, which also calls the sum function
    avg(doubleVector);

    // Call the lowest function
    lowest(doubleVector);

    // Initializing a multi-lined string
    string sentence = "A little bird with a yellow bill";

    // Call the camelCase function
    camelCase(sentence);

    // Return 0
    return EXIT_SUCCESS;
}