/* Play the "Rock, Paper, Scissors" game with computer */

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  std::string computer_choice, user_choice;

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n";
  std::cout << "Choose yout weapon:\n";
  std::cout << "1) rock\n";
  std::cout << "2) paper\n";
  std::cout << "3) scissors\n";
  std::cin >> user;

  switch (computer) {
    case 1:
      computer_choice = "rock";
      break;
    case 2:
      computer_choice = "paper";
      break;
    case 3:
      computer_choice = "scissors";
      break;
    default:
      computer_choice = "Invalid input";
      break;
  }

  switch (user) {
    case 1:
      user_choice = "rock";
      break;
    case 2:
      user_choice = "paper";
      break;
    case 3:
      user_choice = "scissors";
      break;
    default:
      user_choice = "Invalid input";
      break;
  }

  std::cout << "\nComputer: " << computer_choice << "\nYou: " << user_choice << "\n\n";

  if (computer == user) {
    std::cout << "Tie!";
  } else if (computer == 1 ) {
      if (user == 2) {
        std::cout << "Paper beats rock. You won! :)\n";
      } else if (user == 3) {
        std::cout << "Rock beats scissors. You lost... :(\n";
      }
  } else if (computer == 2) {
      if (user == 1) {
        std::cout << "Paper beats rock. You lost... :(\n";
      } else if (user == 3) {
        std::cout << "Sciccors beats paper. You won! :)\n";
      }
  } else if (computer == 3) {
      if (user == 1) {
        std::cout << "Rock beats scissors. You won! :)\n";
      } else if (user == 2) {
        std::cout << "Scissors beats paper. You lost... :(\n";
      }
  }
    

}