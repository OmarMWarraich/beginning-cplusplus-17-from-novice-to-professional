#include <iostream>
#include <iomanip>

int main() {
  double radius;
  std::cout << "Enter the radius of the circle: ";
  if (!(std::cin >> radius)) {
    std::cerr << "Invalid radius input\n";
    return 1;
  }
  if (radius < 0) {
    std::cerr << "Radius cannot be negative\n";
    return 1;
  }

  int precision;
  std::cout << "Enter number of decimal digits to display: ";
  if (!(std::cin >> precision) || precision < 0) {
    std::cerr << "Invalid precision\n";
    return 1;
  }

  const double PI = 3.141592653589793238;
  double area = PI * radius * radius;

  std::cout << std::fixed << std::setprecision(precision);
  std::cout << "The area of the circle with radius " << radius << " is " << area << '\n';

  return 0;
}