/*
Program for calculating square roots based on user data.
*/

#include <iostream>
#include <cmath>

int main() {
  double a, b, c;
  double root1, root2;

  //User's const values inputs
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "\n";

  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "\n";

  std::cout << "Enter c: ";
  std::cin >> c;
  std::cout << "\n";
  
  //Calculations
  root1 = (-b + std::sqrt(b*b - 4*a*c))/(2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c))/(2*a);

  //User output
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";

}