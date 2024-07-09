/********************************************
* PostFixStack.h contains the definition of the 
* class PostFixStack. PostFixStack is a class that has
* only one purpose: evaluating the solution to post fix 
* equations. To use PostFixStack, a string that is 
* a postfix expression is passed to the constructor. 
* PostFixStack will break the string into a vector of 
* smaller strings. If the expression is written correctly, 
* the solution will be printed to the terminal window. If the 
* expression is written incorrectly, an error message describing 
* the problem will be printed to the terminal window. 
*
* Author: Cabri Chamberlin
* Version: July 7, 2024 
*********************************************/

#include <sstream> 
    using std::stringstream; 
#include <string> 
    using std::string; 
    using std::to_string; 
#include <iostream> 
    using std::cout; 
    using std::endl; 
#include "helpfulFunctions.h"
#include "PostFixStack.h"

PostFixStack::PostFixStack(string expression) { 
    //set variables to starting values 
    topOfStack = 0; 
    positionInTokens = 0; 
    delimiter = ' '; 

    // Create a stringstream object with the input string 
    stringstream ss(expression); 
  
    //populate vector with smaller strings broken up at each space
    while (getline(ss, token, delimiter)) { 
        tokens.push_back(token); 
    } 
    // for (unsigned int i = 0; i < tokens.size(); i++) {
    //     cout << tokens[i] << endl; 
    // }
 
    for (unsigned int i = positionInTokens; i <= tokens.size(); i++) {
        // cout << "iteration: " << i << " through for loop" << endl; 
        //if there are 3 items total on the stack 
        if (topOfStack == 3) {
            i--; 
            // cout << "top of stack was 3. There are 3 items on stack" << endl; 
            //if there is an operator in the postfix expression before 2 numbers are encountered, 
            //a number is missing 
            if (stack[0] == "+" || stack[0] == "-" || stack[0] == "*" || stack[0] == "/" || 
                stack[1] == "+" || stack[1] == "-" || stack[1] == "*" || stack[1] == "/") {
                    cout << "An operand is missing. Expression not evaulated" << endl; 
                    return; 
                }
            //if the third item on the stack is not an operator, an operator is missing 
            else if (stack[2] != "+" && stack[2] != "-" && stack[2] != "*" && stack[2] != "/") {
                cout << "An operator is missing. Expression not evaluated" << endl; 
                return; 
            }
            //if there are three items on the stack, and they are of the correct type, evaulate the 
            //solution to the expression 
            else {
                int solution = evaluate(stack[0], stack[1], stack[2]); 
                // cout << "solution evaluated to: " << endl; 
                string solutionString = to_string(solution); 
                //pop variables off top of stack 
                stack.pop_back(); 
                stack.pop_back(); 
                stack.pop_back(); 
                //set first position in stack to evaluated result of expression 
                stack.push_back(solutionString); 
                topOfStack = 1;
                // cout << "stack[0] set to: " << stack[0] << endl; 
                //if we're at the end of the tokens vector 
                if (i == tokens.size() -1) {
                    // cout << "The solution is: " << solution << endl; 
                }
            }
        }
        else {
            // cout << "Top of stack not 3 yet. Still adding items" << endl; 
            stack.push_back(tokens[i]); 
            // for (unsigned int i = 0; i < stack.size(); i++) {
            //     cout << stack[i] << endl; 
            //  }

            positionInTokens++; 
            topOfStack++; 
        }
    }
    cout << "The solution to the postfix equation is: " << stack[0] << endl; 

}
