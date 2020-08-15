#include <iostream>
#include "profile.hpp"

int main() {
  //create new profile
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  //add some hobbies to the profile
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");

  //show profile in the console
  sam.view_profile();
}