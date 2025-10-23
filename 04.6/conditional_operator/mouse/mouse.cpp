#include <iostream>

int main() {
  int mice{};
  int brown{};
  int white{};

  std::cout << "How many brown mouse do you have? ";
  std::cin >> brown;
  std::cout << "How many white mouse do you have? ";
  std::cin >> white;

  mice = brown + white;

  std::cout << "You have " << mice << (mice == 1 ? " mouse" : " mice") << " in total." << std::endl;
}