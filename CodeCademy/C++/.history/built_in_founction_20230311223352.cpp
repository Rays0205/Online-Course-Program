#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

  // This seeds the random number generator:
    srand (time(NULL)); // time(NULL)回傳當前時間的數值(秒)從1月1號算起 srand()設定數值為種子值

  // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 29; // 

    std::cout << the_amazing_random_number << "\n";

}