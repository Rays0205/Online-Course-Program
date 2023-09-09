/*
Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.
Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.
*/
#include <iostream>

int main() {
  // Add your code below  
  double weight;
  std::cin >> weight;
  std::cout << weight*9.8/3.721 ;

  double distance;
  std::cin >> distance;
  std::cout << distance*1.609344;
}