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
    e.start(power);
    

}
