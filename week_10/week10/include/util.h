/**
* @file util.h
* @brief  Week 10, C++ Review and Warmup from CSI140
*
* @author Zachary Jones
* @assignment Lecture 10.1
* @date 11/11/2020
* @credits
* 
*/


#include <iostream> 
#include <vector>
#include <string>
#include <cctype>
#include "stdlib.h"

using namespace std;

// Function that returns a random element from the vector that was passed
string randomElement(vector<string> stringVec);

// Function that returns the sum of all vector elements
double sum(vector<double> doubleVec);

// Function that returns the average of all vector elements
double avg(vector<double> doubleVec);

// Function that returns the lowest value out of all the vector elements
double lowest(vector<double> foubleVec);

string camelCase(string sentence);