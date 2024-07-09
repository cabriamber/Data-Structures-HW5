/********************************************
* PostFixStack.h contains the definition of the 
* class PostFixStack. 
*
* Author: Cabri Chamberlin
* Version: July 7, 2024 
*********************************************/

#ifndef POSTFIXSTACK_H
#define POSTFIXSTACK_H

#include <vector> 
    using std::vector; 
#include <string>
    using std::string; 

class PostFixStack {

public: 
    //constructor 
    PostFixStack(string); 

private: 
    vector <string> tokens; 
    char delimiter; 
    string token; 

    vector <string> stack; 

    int topOfStack; 
    int positionInTokens; 

};

#endif