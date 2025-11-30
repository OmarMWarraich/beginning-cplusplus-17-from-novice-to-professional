#include <iostream>
#include <vector>
#include <cmath>

void merge(int A[], int l, int mid, int h)
{
  int n1 = mid - l + 1;
  int n2 = h - mid;

  std::vector<int> L(A + l, A + mid + 1);
  std::vector<int> R(A + mid + 1, A + h + 1);

  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      A[k++] = L[i++];
    }
    else { A[k++] = R[j++]; }
  }

  while (i < n1) A[k++] = L[i++];
  while (j < n2) A[k++] = R[j++];
}

void mergesort(int A[], int l, int h)
{
  if (l < h)
  {
    int mid = l + floor((h - l) / 2);
    mergesort(A, l, mid);
    mergesort(A, mid + 1, h);
    merge(A, l, mid, h);
  }
}

int main()
{
  int B[]{ 100,76, 99, 89, 23, 35, 46 };
  mergesort(B, 0, std::size(B) - 1);

  std::cout << "The sorted array is ";
  for (auto x : B) std::cout << x << ' ';
  std::cout << std::endl;
}