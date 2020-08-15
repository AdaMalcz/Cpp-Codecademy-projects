#include <iostream>
#include "profile.hpp"

//constructor
Profile::Profile(std::string new_name, int new_age, std::string new_city,std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {} //member initializer list

//other methods
void Profile::view_profile() {
  std::cout << "\nName: " << name
            << "\nAge: " << age
            << "\nCountry: " << country
            << "\nCity: " << city
            << "\nPronouns: " << pronouns << "\n";
  std::cout << "\nHobbies:\n";
  for (int i = 0; i < hobbies.size(); i++) {
    std::cout << " - " << hobbies[i] << "\n";
  }
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}