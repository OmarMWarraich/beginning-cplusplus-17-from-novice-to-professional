#include <iostream>
#include <array>

int main()
{
  int values[]{ 5, 8, 12, 21, 34, 55, 89 };
  std::cout << "Array size: " << sizeof(values) / sizeof(values[0]) << '\n';

  int sum{};

  for (size_t i = 0; i < std::size(values); ++i)
  {
    sum += values[i];
  }
  std::cout << "Sum: " << sum << '\n';
}