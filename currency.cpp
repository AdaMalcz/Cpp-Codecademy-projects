/* Program for converting popular currencies of South America to US Dollars.*/

#include <iostream>

int main() {
  
  //Currency of South America countries
  double pesos, reais, soles; //Colombia, Brazil, Peru
  
  //Value of money in dollars
  double dollars;

  //Conversion rates
  double pesos_rate, reais_rate, soles_rate;

  //User's wallet
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "\n";

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "\n";

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  std::cout << "\n";

  //12.08.2020 currency rates
  pesos_rate = 0.045;
  reais_rate = 0.18;
  soles_rate = 0.28;

  //Calculations
  dollars = (pesos_rate * pesos) + (reais_rate * reais) + (soles_rate * soles);

  //User's output
  std::cout << "US Dollars = $" << dollars << "\n";

}