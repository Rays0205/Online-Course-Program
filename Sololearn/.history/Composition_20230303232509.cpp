/*
Composition

You are creating a program to make Cars. Each Car has an Engine, which is declared as a separate class.
Complete the given code to:
1. call the start() method of the Engine in the start() method of the Car,
2. create a Car object with the given Engine and inputs in main and call its start() method.

Read and understand the given code first, before making any modifications.
*/

#include <iostream>
using namespace std;

class Engine {
    public:
        Engine(int p): power(p) {};
        void start() {
            cout <<"Engine ON ("<<power<<" horsepower)";
        }
    private:
        int power;
};
class Car {
    public:
        Car(Engine x, string c, int y): e(x), color(c), year(y) {};
        void start() {
            cout <<"Starting"<<endl;
            //your code goes here
            
        }
    private:
        Engine e;
        string color;
        int year;
};

int main() {
    int power;
    string color;
    int year;
    cin >> power >> color >> year;
    
    Engine e(power);
    //your code goes here
    Car car;
    

}
