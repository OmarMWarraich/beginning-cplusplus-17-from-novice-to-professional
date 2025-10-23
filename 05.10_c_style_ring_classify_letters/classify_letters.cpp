#include <iostream>
#include <cctype>
#include <iomanip>

int main()
{
  const int max_length{ 100 }; // Maximum input length
  char text[max_length]{}; // Input text array

  std::cout << "Enter a line of text: " << std::endl;

  // Read a line of text from the user
  std::cin.getline(text, max_length);
  std::cout << "You entered:\n" << text << std::endl;

  size_t vowels{}; // Count of vowels
  size_t consonants{}; // Count of consonants

  for (int i{}; text[i] != '\0'; i++)
  {
    if (std::isalpha(text[i])) // Check if the character is a letter
    {
      switch (std::tolower(text[i])) // Convert to lowercase for uniformity
      {
      case 'a': case 'e': case 'i': case 'o': case 'u':
        ++vowels; // Increment vowel count
        break;
      default:
        ++consonants; // Increment consonant count
      }
    }
  }
  std::cout << "Number of vowels: " << vowels << "\nNumber of consonants: " << consonants << std::endl;
}