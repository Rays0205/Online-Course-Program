/*
Question
- Define a function is_palindrome() that takes:

// An std::string parameter text.
// The function should return:

> true if text is a palindrome.
> false if text is not a palindrome.
? (A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

! We will not test for edge cases such as capitalization or spaces.
*/
//Solution
#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string reverse = "";

  for(int i=text.size()-1;i>=0;i--){
  reverse += text[i];
  }
  if(reverse == text){
    return true;
  } 
    return false;


}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}