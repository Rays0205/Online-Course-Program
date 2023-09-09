#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> number {2, 4, 3, 6, 1, 9};
    int odd_product = 1;
    int even_sum = 0;
    for(int i = 0; i < number.size(); i++){
        if(number[i]%2!= 0){
            odd_product *= number[i];
        }
        else{
            even_sum += number[i];
        }
    }
    cout << "Sum of even is " << even_sum << endl;
    cout << "Product of odd is " << odd_product << endl;

    return 0;
}