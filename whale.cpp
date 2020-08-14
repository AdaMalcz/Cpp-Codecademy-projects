/*
Fun fact: whales speaks english, but with few simple rules:

  - There are no consonants. Only vowels excluding the letter y.
  - The u and e are extra long, so we must double them in writing.

Program translates any english sentence to whales language.
*/

#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector<char> vowels= {'a', 'e', 'i', 'o', 'u'}; // all legal vowels
  std::vector<char> result;
  std::string sentence;

  std::cout << "Your sentence: ";
  std::getline(std::cin, sentence); //std::cin that includes white spaces
  std::cout << "\nTranslation: ";
  

  for (int i = 0; i < sentence.size(); i++) {
    for (int j = 0; j < vowels.size(); j++) {
      if (sentence[i] == vowels[j]) {
        result.push_back(sentence[i]);
      }
    }
    if (sentence[i] == 'e' || sentence[i] == 'u') {
        result.push_back(sentence[i]);
      }
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }

}