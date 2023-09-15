/* Question
- Currently, the program is set up with goodnight1()‘s declaration and definition split into night.hpp and night.cpp respectively.
- We’ll try using the inline keyword and see how it affects the runtime of the function.
- We’re using a library header called chrono that allows us to clock time in milliseconds. (Don’t worry if you don’t understand all of the syntax used for this!)

- 1.run the code:
- comment the "inline" block in

*/
// Solution
#include <iostream>
#include <chrono>

#include "night.hpp"

int main()
{

    // Measure time taken for goodnight1():
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

    std::cout << goodnight1("tulip");

    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> time_span = end - start;

    // Print time taken for goodnight1():
    std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";

    std::cout << goodnight2("eraser", "ivy");
}