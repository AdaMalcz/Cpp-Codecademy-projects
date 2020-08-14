/* 
Program checks if the word given by user is a palindrome or not.
A palindrome is any text that has the same characters backwards as it does forwards.
*/
#include <iostream>

bool is_palindrome(std::string text) {
  std::string reversed_text = "";
  for (int i = text.size() -1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
  }
  if (text == reversed_text) {
    return true;
  } else {
    return false;
  }
}

int main() {
  
  std::string word;
  std::cout << "Type single lower-case word: ";
  std::cin >> word;
  std::cout << "\n";

  if (is_palindrome(word)) {
    std::cout << word << " is a palindrome.\n";
  } else {
    std::cout << word << " is not a palindrome.\n";
  }
  
}