#include <iostream>
#include <array>

int partition(int A[], int low, int high)
{
  int pivot = A[high];
  int i = low - 1;

  for (size_t j = low; j <= high - 1; ++j)
  {
    if (A[j] <= pivot) {
      ++i;
      std::swap(A[i], A[j]);
    }
  }
  std::swap(A[i + 1], A[high]);
  return i + 1;
}

void quickSort(int A[], int low, int high)
{
  if (low < high)
  {
    auto p = partition(A, low, high);
    quickSort(A, low, p - 1);
    quickSort(A, p + 1, high);
  }
}

int main()
{
  int B[]{ 31,12,3,22,85 };
  quickSort(B, 0, std::size(B) - 1);

  std::cout << "The sorted array is ";
  for (auto x : B) std::cout << x << ' ';
  std::cout << std::endl;
}