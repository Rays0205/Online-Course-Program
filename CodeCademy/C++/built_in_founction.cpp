#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    // This seeds the random number generator:
    //* time(NULL)回傳當前時間的數值(秒)從1月1號算起
    //* srand()設定數值為種子值
    srand (time(NULL)); 

    // Use rand() below to initialize the_amazing_random_number
    //* rand()從0~種子值隨機抽取一個數值回傳(種子值預設為1)
    int the_amazing_random_number = rand() % 10; 
    std::cout << the_amazing_random_number << "\n";

}