#include <iostream>
using namespace std;

void mergeSort(int arr[], int brr[], int m, int n)
{
  int i = 0;
  int j = 0;
  while (i < m && j < n)
  {
    if (arr[i] <= brr[j])
    {
      cout << arr[i] << " ";
      i++;
    }
    else
    {
      cout << brr[j] << " ";
      j++;
    }
  }
  while (i < m)
  {
    cout << arr[i] << " ";
    i++;
  }
  while (j < n)
  {
    cout << brr[j] << " ";
    j++;
  }
}

int main()
{
  int arr[] = {10, 15, 20};
  int brr[] = {5, 50, 50};
  int m = sizeof(arr) / sizeof(arr[0]);
  int n = sizeof(brr) / sizeof(brr[0]);

  mergeSort(arr, brr, m, n);
  return 0;
}
