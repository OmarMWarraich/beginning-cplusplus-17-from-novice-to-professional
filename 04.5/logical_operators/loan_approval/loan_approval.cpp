#include <iostream>

int main()
{
  int age;
  int income;
  int balance;

  std::cout << "Enter your age: ";
  std::cin >> age;

  std::cout << "Enter your annual income in dollars: ";
  std::cin >> income;

  std::cout << "Enter your credit balance in dollars: ";
  std::cin >> balance;

  // we only lend to people who are 21 years or older, who make over $25,000 per year, or have over $100,000 in their account, or both
  if (age >= 21 && (income > 25000 || balance > 100000))
  {
    // Ok you are good for the loan but how much
    // the loan will be lesser of twice income and half balance

    int loan{};
    if (2 * income < balance / 2)
    {
      loan = 2 * income;
    }
    else
    {
      loan = balance / 2;
    }
    std::cout << "\nYou qualify for a loan of $" << loan << std::endl;
  }
  else
  {
    std::cout << "\nSorry you do not qualify for a loan." << std::endl;
  }

}