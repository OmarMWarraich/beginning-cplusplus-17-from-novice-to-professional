#include <iostream>

int main()
{
  int choice{};

  std::cout << "Your electronic recipe book is at your service!\n";
  std::cout << "You can choose from the following delicious dishes:\n";
  std::cout << "1. Boiled eggs\n";
  std::cout << "2. Scrambled eggs\n";
  std::cout << "3. Fried eggs\n";
  std::cout << "4. Coddled eggs\n";
  std::cout << "Enter your selection number: ";
  std::cin >> choice;

  switch (choice)
  {
  case 1:
    std::cout << "To boil eggs, place them in boiling water for 9-12 minutes.\n";
    break;
  case 2:
    std::cout << "To make scrambled eggs, whisk eggs with milk, then cook in a pan over medium heat while stirring.\n";
    break;
  case 3:
    std::cout << "To fry eggs, heat oil in a pan and cook the eggs until the whites are set and yolks reach desired doneness.\n";
    break;
  case 4:
    std::cout << "To coddle eggs, place them in a coddler and immerse in boiling water for about 7-8 minutes.\n";
    break;
  default:
    std::cout << "Sorry, that selection is not recognized. Please choose a number between 1 and 4.\n";
    break;
  }
}