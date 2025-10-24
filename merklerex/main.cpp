#include <iostream>

void printMenu()
{
    // 1. Print help
    std::cout << "1. Print help \n" << std::endl;
    // 2. Print Exchange Stats
    std::cout << "2. Print Exchange Stats\n" << std::endl;
    // 3. Make an offer
    std::cout << "3. Make an offer\n" << std::endl;
    // 4. Make a bid
    std::cout << "4. Make a bid\n" << std::endl;
    // 5. Print a wallet
    std::cout << "5. Print a wallet\n" << std::endl;
    // 6. Continue
    std::cout << "6. Continue\n" << std::endl;
    std::cout << "===========================\n" << std::endl;
} 

int getUserOption()
{

    std::cout << "Enter your choice: (1-6): \n" << std::endl;

    int userOption;
    std::cin >> userOption;
    std::cout << '\n';
    // Bold
    std::cout << "\033[1mYou selected option " << userOption << "\033[0m\n" << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption < 1 || userOption > 6)
    {
      std::cout << "\033[31mInvalid option selected. Please choose a number between 1 and 6.\033[0m\n" << std::endl;
    }

    if (userOption == 1)
    {
      std::cout << "\033[1mHelp:\033[0m This is a simple exchange menu. Choose an option by entering the corresponding number.\n" << std::endl;
    }

    if (userOption == 2)
    {
      std::cout << "\033[1mExchange Stats:\033[0m [Placeholder for exchange statistics]\n" << std::endl;
    }

    if (userOption == 3)
    {
      std::cout << "\033[1mMake an Offer:\033[0m [Placeholder for making an offer]\n" << std::endl;
    }

    if (userOption == 4)
    {
      std::cout << "\033[1mMake a Bid:\033[0m [Placeholder for making a bid]\n" << std::endl;
    }

    if (userOption == 5)
    {
      std::cout << "\033[1mPrint Wallet:\033[0m [Placeholder for wallet details]\n" << std::endl;
    }

    if (userOption == 6)
    {
      std::cout << "\033[1mContinuing to the next step...\033[0m\n" << std::endl;
    }

}

int main()
{
  while (true)
  {
    printMenu(); 
    int userOption = getUserOption();
    processUserOption(userOption);
  }
  return 0;
}
