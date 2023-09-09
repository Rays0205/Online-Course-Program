/*

Void — The Point of No Return
Let’s build a simple function with no input and no output. We can do that?

Enter the void specifier, which is added in the function declaration before the function name. A void function, also known as a subroutine, has no return value, making it ideally suited for situations where you just want to print stuff to the terminal.

*/

#include <iostream>
using namespace std;
// Define oscar_wilde_quote() below:

void oscar_wilde_quote(){

    cout << "The highest, as the lowest, form of criti0cism is a mode of autobiography." << endl;
}
int main() {

  // Call your function here:
    oscar_wilde_quote();

}