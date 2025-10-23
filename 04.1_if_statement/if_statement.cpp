#include <iostream>

int main() {
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // If statement to check if the number is positive
  if (number > 0) {
    std::cout << "The number is positive." << std::endl;
  }
  if (number == 0) {
    std::cout << "The number is zero." << std::endl;
  }
  if (number < 0) {
    std::cout << "The number is negative." << std::endl;
  }
}