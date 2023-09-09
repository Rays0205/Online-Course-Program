/*


*/
#include <iostream>

int main() {
  
  int weight;
  int planet;
  
  std::cout << "Enter a number for the planet you weight on earth";
  std::cin >> weight;

  std::cout << "\nI have information for the following planets:\n\n";
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  std::cout <<"Which planet do you want to visit";
  std::cin >> planet;

  switch(planet){
    case 1:
    weight *=0.78;
    break;
    case 2:
    weight *=0.39;
    break;
    case 3:
    weight *=2.65;
    break;
    case 4:
    weight *=1.17
    break;
    case 5:
    weight *=1.17;
    break;
    case 6:
    weight *=1.23;
    break;
  }
  std::cout << "\n Your weight:" << weight << "\n";

}