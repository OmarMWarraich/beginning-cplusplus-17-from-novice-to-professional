// Using a nested if
#include <iostream>

int main() {
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // Nested if statement to check if the number is positive, negative, or zero
  if (number >= 0) {
    if (number > 0) {
      std::cout << "The number is positive." << std::endl;
    }
    else {
      std::cout << "The number is zero." << std::endl;
    }
  }
  else {
    std::cout << "The number is negative." << std::endl;
  }
}