#include <iostream>
#include <iomanip> // Required for setw

int main() {
  const double pi = { 3.14159265358979323846 };
  for (double radius{ 2.5 }; radius <= 20.0; radius += 2.5)
  {
    std::cout << "Radius: " << std::setw(15) << radius << std::setw(15) << " Area: " << std::setw(15) << (pi * radius * radius) << std::setw(15) << " Circumference: " << std::setw(15) << (2 * pi * radius)
      << '\n' << std::endl;
  }
}

