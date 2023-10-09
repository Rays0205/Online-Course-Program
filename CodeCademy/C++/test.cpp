/*
Write a function named tenth_power()
The function should return num raised to the 10th power.
*/
#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num)
{
    return pow(num, 10);
}

// main code
int main()
{
    //test
    //tt
    std::cout << tenth_power(0) << "\n";
    std::cout << tenth_power(1) << "\n";
    std::cout << tenth_power(2) << "\n";
}
