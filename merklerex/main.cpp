#include <iostream>

void printMenu()
{
    std::cout << "1. Print help \n" << std::endl;
    std::cout << "2. Print Exchange Stats\n" << std::endl;
    std::cout << "3. Make an offer\n" << std::endl;
    std::cout << "4. Make a bid\n" << std::endl;
    std::cout << "5. Print a wallet\n" << std::endl;
    std::cout << "6. Continue\n" << std::endl;
    std::cout << "===========================\n" << std::endl;
} 

void printError()
{
    std::cout << "\033[31mInvalid option selected. Please choose a number between 1 and 6.\033[0m\n" << std::endl;
}

void printHelp()
{
    std::cout << "\033[1mHelp:\033[0m This is a simple exchange menu. Choose an option by entering the corresponding number.\n" << std::endl;
}

void printStats()
{
    std::cout << "\033[1mExchange Stats:\033[0m [Placeholder for exchange statistics]\n" << std::endl;
}

void placeOffer()
{
    std::cout << "\033[1mMake Offer:\033[0m [Placeholder for making offer]\n" << std::endl;  
}

void placeBid()
{
    std::cout << "\033[1mMake a Bid:\033[0m [Placeholder for making a bid]\n" << std::endl;
}

void printWallet()
{
    std::cout << "\033[1mPrint Wallet:\033[0m [Placeholder for printing wallet]\n" << std::endl;
} 

void printContinue()
{
    std::cout << "\033[1mContinuing to the next step...\033[0m\n" << std::endl;
}

int getUserOption()
{
    std::cout << "Enter your choice: (1-6): \n" << std::endl;

    int userOption;
    std::cin >> userOption;
    std::cout << '\n';
    std::cout << "\033[1mYou selected option " << userOption << "\033[0m\n" << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption < 1 || userOption > 6)
    {
       printError(); 
    }
    if (userOption == 1)
    {
       printHelp(); 
    }
    if (userOption == 2)
    {
       printStats(); 
    }
    if (userOption == 3)
    {
       placeOffer(); 
    }
    if (userOption == 4)
    {
       placeBid(); 
    }
    if (userOption == 5)
    {
       printWallet(); 
    }
    if (userOption == 6)
    {
       printContinue(); 
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
