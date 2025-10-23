#include <iostream> // For output to the screen
#include <cmath>    // For std::ceil and std::pow
int main()
{
  // 2 square feet of pond for every 6 inches of fish
  const double fish_factor{ 2.0 / 0.5 }; // Area in square feet per inch of fish
  const double inches_per_foot{ 12.0 };
  const double pi{ 3.141592653589793238 };

  double fish_count{}; // Number of fish
  double fish_length{}; // Length of each fish in inches

  std::cout << "Enter the number of fish: ";
  std::cin >> fish_count;
  std::cout << "Enter the length of each fish in inches: ";
  std::cin >> fish_length;
  fish_length /= inches_per_foot; // Convert fish length to feet

  // Calculate the required surface area of the pond in square feet
  const double pond_area{ fish_count * fish_length * fish_factor };

  // Calculate the diameter of the pond in feet
  const double pond_diameter{ 2.0 * std::sqrt(pond_area / pi) };

  std::cout << "The pond should have a diameter of at least "
    << std::ceil(pond_diameter) << " feet." << std::endl;
}