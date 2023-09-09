/*

The first index in a vector is 0.

Some of the functions that come with vectors:

.push_back()
.pop_back()
.size()

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> number {2, 4, 3, 6, 1, 9};
    int odd_product = 1;
    int even_sum = 0;
    int size = number.size();
    for(int i = 0; i < size; i++){
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