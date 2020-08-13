/* 
==============================
DOG TO HUMAN YEARS CALCULATOR
==============================
*/ 

#include <iostream>

int main() {
  //My dog's age
  int dog_age = 3;
  int early_years, later_years, human_years;

  //The first two years of a dog’s life count as 21 human years
  early_years = 21;

  //Each following year counts as 4 human years
  later_years = (dog_age - 2) * 4;

  //Calculating human years
  human_years = early_years + later_years;

  std::cout << "My name is Luna! Ruff ruff, I am " << human_years << " years old in human years.\n";
}

/* UPGRDE IDEAS:
- user input with validation
*/