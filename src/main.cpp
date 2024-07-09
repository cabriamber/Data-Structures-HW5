/********************************************
* main.cpp is the driver of the program. It holds 
* several variable declarations for strings that contain 
* postfix expressions, and calls the constructor of 
* PostFixStack several times to test the functionality 
* of PostFixStack 
*
* Author: Cabri Chamberlin
* Version: July 7, 2024 
*********************************************/

#include <string> 
    using std::string; 
#include <iostream> 
    using std::cout; 
    using std::endl; 
#include <sstream>
    using std::stringstream; 
#include <vector> 
    using std::vector; 
#include "helpfulFunctions.h"
#include "PostFixStack.h"

int main() {
    //test PostFixStack class on correct postfix expressions 
    string c = "35 14 + 12 -"; //should evaluate to 37
    string d = "9 7 - 2 / 3 *"; //should evaluate to 3 

    PostFixStack test = PostFixStack(c); 
    PostFixStack test2 = PostFixStack(d); 

    //test PostFixStack class on incorrect postfix expressions
    string e = "9 7 - 2 / * 3"; //too many operators, not enough operands
    string f = "9 7 - 2 7 6 *"; //too many operands, not enough operators

    PostFixStack test3 = PostFixStack(e); 
    PostFixStack test4 = PostFixStack(f); 
    

return 0;    
}