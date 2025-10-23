#include <iostream>

int main() {
  char letter;
  std::cout << "Enter a letter: ";
  std::cin >> letter;

  if (std::isupper(letter)) {
    std::cout << "You entered an uppercase letter." << std::endl;
  }
  else if (std::islower(letter)) {
    std::cout << "You entered a lowercase letter." << std::endl;
  }
  else {
    std::cout << "You did not enter a letter." << std::endl;
  }
}