/*
- Time for a coffee break!
- You’re automating a coffee delivery system where people can order:
> make_coffee()
> Coffee black (with no milk or sugar)
> Coffee with milk
> Coffee with sugar
> Coffee with milk and sugar
- Step 1
- You have a function make_coffee() built out, Add default arguments of false to the parameters of make_coffee() in coffee.hpp.
- Step 2
- Remove any unnecessary false arguments from each function call in main().
! Notice how the result is the same!
/ default argument 可以減少一些需要重複輸入的資料，先將需重複的資料在coffee.hpp檔裡設定成預設值，再將function寫在coffee.cpp檔
*/
//* Main code
#include <iostream>

#include "coffee.hpp"

int main()
{

    // coffee black
    std::cout << make_coffee();

    // coffee with milk
    std::cout << make_coffee(true);

    // coffee with milk and sugar
    std::cout << make_coffee(true, true);

    // coffee with sugar
    std::cout << make_coffee(false, true);
}
/*
* original code
int main()
{

    // coffee black
    std::cout << make_coffee(false,false);

    // coffee with milk
    std::cout << make_coffee(true, false);

    // coffee with milk and sugar
    std::cout << make_coffee(true, true);

    // coffee with sugar
    std::cout << make_coffee(false, true);
}

*/