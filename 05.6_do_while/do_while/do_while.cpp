#include <iostream>
#include <cctype> // for tolower() function

int main()
{
  char reply{}; // Stores response to prompt for input
  int count{}; // Counts the number of input values
  double temperature{}; // Stores input temperature values
  double total{}; // Accumulates total of input temperature values
  do
  {
    std::cout << "Enter a temperature: "; // Prompt for temperature
    std::cin >> temperature; // Read temperature
    total += temperature; // Accumulate total
    ++count; // Increment count
    std::cout << "Would you like to enter another temperature? (Y/N): ";
    std::cin >> reply; // Read response
  } while (std::toupper(reply) == 'Y');
  std::cout << "The average temperature is " << total / count << '\n';
}