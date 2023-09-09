/*

Compile-time Errors
When we are writing C++ programs, the compiler is our first line of defense against errors.

There are two types of compile-time errors:

Syntax errors: Errors that occur when we violate the rules of C++ syntax.
Type errors: Errors that occur when there are mismatch between the types we declared.
Some common syntax errors are:

Missing semicolon ;
Missing closing parenthesis ), square bracket ], or curly brace }
Some common type errors are:

Forgetting to declare a variable
Storing a value into the wrong type

*/

#include <iostream>

int main() {

    char answer;
    int score = 0;

    std::cout << "Who Wants To Be a Millionaire\n\n";
    std::cout << "Question 1)\n\n";

    std::cout << "For ordering his favorite beverages on demand, LBJ had four buttons installed in the Oval Office labeled 'Coffee', 'Tea', 'Coke', and what?\n\n";

    std::cout << "A. Fresca   B. V8  \n";
    std::cout << "C. Yoo-hoo  D. A&W \n\n";

    std::cout << "Enter your answer: ";
    std::cin >> answer;

    if (answer == 'A' || answer == 'a') {
    
    score = score + 100;
    std::cout << "Correct!\n";
    
    }

}