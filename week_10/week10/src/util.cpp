/**
* @file util.cpp
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Zachary Jones
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/

#include "util.h"

string randomElement(vector<string> stringVec) {

    // Initialize a random seed
    srand (time(NULL));

    // The random string that will be returned
    string randomObject; 

    // Variable for a random number between 0-4 
    int randNum = rand() % 5; 

    // Sets returning string equal to a random element
    randomObject = stringVec[randNum];
    
    // Console Outputs
    cout << "Calling randomElement()" << endl;
    cout << "Printing out the entire string vector: ";

    // Loop through the vector 
    for (int i = 0; i < stringVec.size(); i++) {
        // Output every vector element
        cout << stringVec[i] << ", ";
    }

    cout << endl << "Random element is: " << randomObject << endl; // Print out the random string element

    // Return the random string
    return randomObject;
}

double sum(vector<double> doubleVec) {

    // The variable that will be returned after adding all elements
    double total = 0;

    cout << "Calling sum()" << endl;
    cout << "Printing out the entire double vector: ";

    // Loop through the vector 
    for (int i = 0; i < doubleVec.size(); i++) {
        // Add up all the vector values
        total += doubleVec[i];

        // Print out all elements of the vector
        cout << doubleVec[i] << ", ";
    }

    // Console Output
    cout << endl << "Total is: " << total << endl;

    // Return the sum
    return total;
}

double avg(vector<double> doubleVec) {

    // Variable to hold the sum of all elements
    double total = sum(doubleVec);

    // Variable that will be returned, divides the sum by the number of elements
    double average = (total / doubleVec.size());

    // Console Outputs
    cout << "Calling avg()" << endl;
    cout << "Average is: " << average << endl;

    // Returns the average
    return average;
}

double lowest(vector<double> doubleVec) {

// First set the smallestElement to the first element
double smallestElement = doubleVec[0];;

    // Loop through the vector 
    for (int i = 0; i < doubleVec.size(); i++) {

        // Check if another element in the vector is smaller than the first, if so update the smallestElement var
        if (doubleVec[i] < smallestElement) {
            smallestElement = doubleVec[i];
        }
    }

    // Console Outputs
    cout << "Calling lowest()" << endl;
    cout << "Smallest Element is: " << smallestElement << endl;

    // Return the smallest element
    return smallestElement;
}

string camelCase(string sentence) {

    // Variable that will be returned
    string camelCaseSentence;

    // Console Outputs
    cout << "Calling camelCase()" << endl;
    cout << "Original Sentence is: " << sentence << endl;

    // Loop through the vector 
    for (int i = 0; i <= sentence.length(); i++) {

        // Check if the first letter in the sentence is uppercase, if true then convert it to lowercase
        if (isupper(sentence[0])) {
            sentence[i] = tolower(sentence[i]); // Convert Uppercase char to Lowercase char
            camelCaseSentence += sentence[i]; // Adds the lowercase to the string that will be returned
            continue; // Continue through the loop
        }

        // Check if the next element in the sentence is a space
        if (sentence[i] == ' ') {
            sentence[i + 1] = toupper(sentence[i + 1]); // Make the char after the space Uppercase
            continue; // Continue through the loop 
        }
        // If the element is not a space, add it to the modified sentence
        else {
            camelCaseSentence += sentence[i];
        }
    }

    cout << "Modified Sentence is: " << camelCaseSentence << endl;

    // Return the newly formed sentence 
    return camelCaseSentence;
}