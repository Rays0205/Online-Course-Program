/*

Link-time Errors
Sometimes the code compiles fine, but there is still a message because the program needs some function or library that it can’t find. This is known as a link-time error.

As our program gets bigger, it is good practice to divide the program into separate files. After compiling them, the linker takes those separate object files and combines them into a single executable file. Link-time errors are found by the linker when it is trying to combine object files into an executable file.

Some common link-time errors:

Using a function that was never defined (more on this later)
Writing Main() instead of main()

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