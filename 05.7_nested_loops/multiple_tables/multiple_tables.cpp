// Generating multiplication tables using nested loops
#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
  size_t table{}; // Table size
  const size_t table_min{ 2 }; // Minimum table size
  const size_t table_max{ 12 }; // Maximum table size
  char reply{}; // User reply

  do
  {
    std::cout << "Enter the size of the multiplication table"
      << " (" << table_min << " to " << table_max << "): ";
    std::cin >> table;
    std::cout << std::endl;

    // Validate input
    if (table < table_min || table > table_max)
    {
      std::cout << "Invalid table size. Please try again.\n";
      continue; // Prompt again
    }

    // Output column headings
    std::cout << std::setw(6) << "X";
    for (size_t col{ 1 }; col <= table; ++col)
    {
      std::cout << std::setw(6) << col;
    }
    std::cout << '\n';

    // Output separator line
    std::cout << std::setw(6) << "----";
    for (size_t col{ 1 }; col <= table; ++col)
    {
      std::cout << std::setw(6) << "----";
    }
    std::cout << '\n';

    // Output table rows
    for (size_t row{ 1 }; row <= table; ++row)
    {
      std::cout << std::setw(6) << row; // Row heading
      for (size_t col{ 1 }; col <= table; ++col)
      {
        std::cout << std::setw(6) << row * col; // Cell value
      }
      std::cout << '\n';
    }

    // Prompt to continue
    std::cout << "Would you like to generate another table? (Y/N): ";
    std::cin >> reply;
  } while (std::toupper(reply) == 'Y');
}