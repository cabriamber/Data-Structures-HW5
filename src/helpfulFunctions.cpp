/********************************************
* helpfulFunctions.h contains implementations for all functions 
* defined in helpfulFunctions.h. This includes functions that are
* utlized by the program, but are not included in class definitions.  
*
* Author: Cabri Chamberlin
* Version: July 7, 2024 
*********************************************/

#include "helpfulFunctions.h"
#include <string>
    using std::string; 

int evaluate(string firstNumber, string secondNumber, string operation) {
    int firstInt = stoi(firstNumber); 
    int secondInt = stoi(secondNumber); 
    if (operation == "+") {
        return firstInt + secondInt; 
    }
    else if (operation == "-") {
        return firstInt - secondInt; 
    }
    else if (operation == "*") {
        return firstInt * secondInt; 
    }
    else if (operation == "/") {
        return firstInt / secondInt; 
    }
}