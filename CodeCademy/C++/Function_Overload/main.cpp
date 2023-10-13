/*
- Overloading enables you to change the way a function behaves depending on what is passed in as an argument :
* Code
void print_cat_ears(char let)
{
    std::cout << " " << let << "   " << let << " " << "\n";
    std::cout << let << let << let << " " << let << let << let << "\n";
}

void print_cat_ears(int num)
{
    std::cout << " " << num << "   " << num << " " << "\n";
    std::cout << num << num << num << " " << num << num << num << "\n";
}

Given the above functions, you could call the functions like so and C++ will know what to do :
* input
print_cat_ears('A');
print_cat_ears(4);
* Output
Output :
 A   A
AAA AAA

 4   4
444 444
*/
/*
- Step 1
- Change the function names in the following places so that fancy_number() is overloaded:

> num_ops.hpp
> num_ops.cpp
> the function calls in main()
/ 同一個function可以宣告多種資料型態
/ a function can declare more than one type of data type
*/
#include <iostream>

#include "num_ops.hpp"

int main()
{

    std::cout << fancy_number(12, 3) << "\n";
    std::cout << fancy_number(12, 3, 19) << "\n";
    std::cout << fancy_number(13.5, 3.8) << "\n";
}
