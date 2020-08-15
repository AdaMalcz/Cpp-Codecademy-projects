#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "nokia academy";
  std::string answer = "_____ _______";
  int misses = 0;
  std::vector<char> incorrect;
  bool guess = false;
  char letter; //capturing guessed letter

  greet();
  while (answer != codeword && misses < 7) {

    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "\nPlease enter your guess: ";
    std::cin >> letter;

    for (int i = 0; i < codeword.size(); i++) {
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess) {
      std::cout << "\nCorrect!\n";
    } else {
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
 
  }
  display_misses(misses);
  display_status(incorrect, answer);
  end_game(answer, codeword);

}

/* UPGRDE IDEAS:
- ignore letters case

- user input codeword in console 
- base of randomly selected codewords

- another play
- teams and turns system
*/