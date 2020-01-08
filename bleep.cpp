#include <iostream>

#include "functions.hpp"

int main() {

  std::string word = "broccoli";
  std::string text = "There once was a broccoli who liked to broccoli when broccoling";

  Rawtext first_try(word,text);

  std::cout << first_try.edit_old_text();

}
