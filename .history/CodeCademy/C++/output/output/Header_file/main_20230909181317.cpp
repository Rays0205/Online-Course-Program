/* Question
/ 為了避免
- 1. Move the function declarations from above main() in main.cpp into fns.hpp.
- 2. Add the include statement above main(), include the header file in main.cpp
- 3.compile the files.
! Remember to link the two .cpp files when compiling.
> 4. To compile, execute your code with the command:
> g++ main.cpp fns.cpp
> ./a.out
*/

// Solution
#include <iostream>
#include "fns.hpp"

int main()
{

    std::cout << is_palindrome("noon") << "\n";
    std::cout << tenth_power(4) << "\n";
    std::cout << average(4.0, 7.0) << "\n";
}