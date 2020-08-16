/*
THE TASK: 
Write a bleep() function that takes in the word and text and replace each word with asterisks *. 
Make sure to use pass-by-reference so you can modify the text.
*/

#include <iostream>
#include <string>

void bleep(std::string const &forbidden_word, std::string &checked_text) {

  //find first letter of forbidden word in the text
  for (int i = 0; i < checked_text.size(); i++) {

    if (checked_text[i] == forbidden_word[0]) {
      int word_index = i;       //remeber letter index
      bool is_forbidden = true; //assume that it is the forbidden word

      //check following letters of assumed word in text
      for (int j = 0; j < forbidden_word.size(); j++) {
        //if any letter doesn't suit, ignore the rest
        if (checked_text[word_index + j] != forbidden_word[j]) {
          is_forbidden = false;
          break;
        }
      }

      //if there is a match convert forbidden word letters to asterisks and/or continue searching
      if (is_forbidden) {
        for (int j = 0; j < forbidden_word.size(); j++) {
          checked_text[word_index + j] = '*';
        }
      }
    }
  }
}

int main() {
  std::string word = "givl";
  std::string text = "\nI am calm, but givl OFF!!!\n";
  bleep(word, text);
  std::cout << text;
}

/* UPGRDE IDEAS:
- no case sensitive
- censorship class: 
    * add/remove forbidden words
    * replace word with symbols of your choice
    * set the text to check
    * get legit text
*/