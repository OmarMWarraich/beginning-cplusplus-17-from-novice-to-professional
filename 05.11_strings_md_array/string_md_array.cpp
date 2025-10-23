#include <iostream>
#include <array>

int main()
{
  const size_t max_length{ 80 }; // Maximum length of input string (including null terminator `\0`)

  char stars[][max_length]{
    "Arnold Schwarzenegger", "Sylvester Stallone",
    "Bruce Willis", "Jean-Claude Van Damme",
    "Chuck Norris", "Steven Seagal",
    "Julia Roberts", "Demi Moore",
    "Meg Ryan", "Sandra Bullock"
  };

  size_t choice{};

  std::cout << "Pick a lucky star! Enter a number between 1 and "
    << std::size(stars) << ": ";
  std::cin >> choice;

  if (choice >= 1 && choice <= std::size(stars))
  {
    std::cout << "You picked: " << stars[choice - 1] << std::endl;
  }
  else
  {
    std::cout << "Invalid choice!" << std::endl;
  }
}
