#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> number{2, 4, 3, 6, 1, 9};
    int product = 0;
    for(int i = 0; i<number.size(); i++){
        if(number[i]%2!= 0){
            product *= number[i];
        }
    }
    cout << "The sum of "
    return 0;
}