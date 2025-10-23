#include <iostream>
#include <iomanip>

int main()
{
  const size_t size{ 1000 }; // Array size
  double x[size]{}; // Initialize all elements to 0.0
  size_t count{}; // Number of values read

  while (true)
  {
    double input{}; // Temporary store for a value
    std::cout << "Enter a non-zero value or 0  to end: ";
    std::cin >> input;
    if (input == 0)
      break;

    x[count] = input; // Store the value in the array

    if (++count == size)
    {
      std::cout << "Array full. Stopping input.\n";
      break;
    }
  }

  if (!count) // No values were read
  {
    std::cout << "No values to sort.\n";
    return 0;
  }

  std::cout << "\nSorting " << count << " values...\n";

  while (true)
  {
    bool swapped{ false };// becomes true when not all values are in order
    for (size_t i{}; i < count - 1; ++i)
    {
      if (x[i] > x[i + 1])// Out of order so swap them
      {
        const auto temp = x[i];
        x[i] = x[i + 1];
        x[i + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped)// If there were no swaps
      break; // ...all values are in order...
  }// ...otherwise, go round again.
  std::cout << "Your data in ascending sequence:\n"
    << std::fixed << std::setprecision(1);
  const size_t perline{ 10 }; // Number output per line
  size_t n{}; // Number on current line
  for (size_t i{}; i < count; ++i)
  {
    std::cout << std::setw(8) << x[i];
    if (++n == perline)// When perline have been written...
    {
      std::cout << std::endl;// Start a new line and...
      n = 0; // ...reset count on this line
    }
  }
  std::cout << std::endl;
}
