#include <iostream>

int main() {
  long number{};
  std::cout << "Enter an integer less than 2 billion: ";
  std::cin >> number;

  if (number < -2000000000 || number > 2000000000) {
    std::cout << "The number is out of range." << std::endl;
    return 1;
  }
  else {
    if (number % 2) {
      std::cout << "The number " << number << " is odd." << std::endl;
    }
    else {
      std::cout << "The number " << number << " is even." << std::endl;
    }
  }
}