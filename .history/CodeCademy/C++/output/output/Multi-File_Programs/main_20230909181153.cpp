/* Question
- In main.cpp, we have a program with a few functions. Let’s move them into a different file
- 1. add a declaration for each function in main.cpp above the functions above main()
- 2. move all of the function definitions over to my_functions.cpp.
- 3. you must compile your code. 
! Remember to link the two .cpp files when compiling
> 4. To compile, execute your code with the command: 
> g++ main.cpp my_functions.cpp
> ./a.out
*/

// Solution
#include <iostream>
#include <cmath>

// Add declarations here:
double average(double num1, double num2);
int tenth_power(int num);
bool is_palindrome(std::string text);

int main()
{

    std::cout << is_palindrome("racecar") << "\n";
    std::cout << tenth_power(3) << "\n";
    std::cout << average(8.0, 19.0) << "\n";
}