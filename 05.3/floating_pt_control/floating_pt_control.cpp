// filepath: 
// ...existing code...
#include <iostream>
#include <iomanip>
#include <cstddef>

int main()
{
  constexpr double pi{ 3.14159265358979323846 }; // The famous pi
  const std::size_t perline{ 3 }; // Outputs per line
  std::size_t linecount{}; // Count of output lines

  for (double radius{ 0.2 }; radius <= 3.0; radius += 0.2)
  {
    std::cout << std::fixed << std::setprecision(2)
      << "  radius =" << std::setw(5) << radius
      << "  area =" << std::setw(6) << pi * radius * radius;
    if (perline == ++linecount) // When perline outputs have been written...
    {
      std::cout << std::endl; // ...start a new line...
      linecount = 0; // ...and reset the line counter
    }
  }
  std::cout << std::endl;
}
