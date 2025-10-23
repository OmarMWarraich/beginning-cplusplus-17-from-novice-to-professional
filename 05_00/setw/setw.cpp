#include <iostream>
#include <iomanip> // Required for setw

int main() {
  int num1 = 123;
  int num2 = 45;
  double price = 19.99;

  std::cout << std::setw(10) << num1 << std::endl; // Output num1 in a field of width 10
  std::cout << std::setw(10) << num2 << std::endl; // Output num2 in a field of width 10

  // Combining with other manipulators
  std::cout << std::left << std::setw(15) << "Product Name" << std::setw(8) << "Price" << std::endl;
  std::cout << std::left << std::setw(15) << "Laptop" << std::setw(8) << price << std::endl;

  return 0;
}