#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

  // This seeds the random number generator:
    srand (time(NULL)); // time(NULL)回傳

  // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 29; // 

    std::cout << the_amazing_random_number << "\n";

}