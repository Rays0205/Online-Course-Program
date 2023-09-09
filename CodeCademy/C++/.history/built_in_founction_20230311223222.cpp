#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

  // This seeds the random number generator:
    srand (time(NULL)); // 用現在時間設定種子植

  // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 29; // 

    std::cout << the_amazing_random_number << "\n";

}