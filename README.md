*******************************************************
* Name : Cabri Chamberlin
* Student ID: 101051122
* Class : CSCI 2421
* HW# : 5
* Due Date : July 7, 2024
*******************************************************
Read Me
*******************************************************
* Description of the program
*******************************************************
The program contains class definitions and implementations for 
nodes, as well as a linked list which tracks a series of connected nodes 
*******************************************************
* Source files
*******************************************************
* Name: main.cpp
Main program. This is the driver program that calls sub-functions
to create instances of PostFixStack, and call its member 
functions in order to test it
* Name: PostFixStack.h
Contains the definition for the class PostFixStack. 
* Name: PostFixStack.cpp
This file contains the definition of PostFixStack. PostFixStack
objects are capable of parsing postfix expressions stored as strings.
In order to use PostFixStack to evaluate an expression, it must be 
passed to the PostFixStack constructor. PostFixStack will evaluate the 
expression and print the solution to the terminal window if the 
expression is written correctly. If the expression is missing an operator
or an operand, PostFixStack will print an error message to the terminal 
window and cease evaluating the expression. 
* Name: helpfulFunctions.h
This file does not contain a class. It's an extra file for defining 
functions that may be useful for the rest of the program. 
* Name: helpfulFunction.cpp  
This file contains the definition of all functions defined in 
helpfulFunctions.h 
*******************************************************
* Circumstances of programs
*******************************************************
The program runs successfully.
The program was developed and tested on Apple clang version 15.0.0 
(clang-1500.1.0.2.5)
*******************************************************
* How to build and run the program
*******************************************************
1. Uncompress the zip file 
2. Open the src folder in the your code editor
3. compile all .cpp files in the src folder
   (either g++ *.cpp or g++ main.cpp PostFixStack.cpp helpfulFunctions.cpp)
4. run the executable file and view the output in the terminal window