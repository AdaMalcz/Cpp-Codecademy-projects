/*
======================
 HOGWARTS SORTING HAT
======================
*Harry Potter universe

First-year students of The Hogwarts School of Witchcraft and Wizardry must go through the annual Sorting Ceremony.
The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to:
  -gryffindor
  -hufflepuff
  -ravenclaw
  -slytherin

Program asks the user some questions and places them into one of the four Houses based on their answers.
*/

#include <iostream>

int main() {
  //The Houses points
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  //The answers
  int answer1, answer2, answer3, answer4;

  //Sorting Hat Ceremony
  std::cout << "The Sorting Hat Quiz!\n";

  // question 1
  std::cout << "Question 1) When I'm dead, I want people to remember me as:\n"; 
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";
  std::cout << "Your answer: ";
  std::cin >> answer1;
  std::cout << "\n";

  switch (answer1) {
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input";
      break;
  }

  // question 2
  std::cout << "Question 2) Dawn or Dusk?\n"; 
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n\n";
  std::cout << "Your answer: ";
  std::cin >> answer2;
  std::cout << "\n";

  switch (answer2) {
    case 1:
      gryffindor++;
      ravenclaw++;
      break;
    case 2:
      hufflepuff++;
      slytherin++;
      break;
    default:
      std::cout << "Invalid input";
      break;
  }

  // question 3
  std::cout << "Question 3) Which kind of instrument most pleases your ear?\n"; 
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";
  std::cout << "Your answer: ";
  std::cin >> answer3;
  std::cout << "\n";

  switch (answer3) {
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "Invalid input";
      break;
  }

  // question 4
  std::cout << "Question 4) Which road tempts you most?\n"; 
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";
  std::cout << "Your answer: ";
  std::cin >> answer4;
  std::cout << "\n";

  switch (answer4) {
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Invalid input";
      break;
  }

  //The result
  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";

  /*
  //Houses points:
  std::cout << "gryffindor: " << gryffindor << "\n";
  std::cout << "hufflepuff: " << hufflepuff << "\n";
  std::cout << "ravenclaw: " << ravenclaw << "\n";
  std::cout << "slytherin: " << slytherin << "\n";
  */
}