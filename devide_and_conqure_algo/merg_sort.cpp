#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void insertSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
  }
}

int main()
{
  int arr[] = {10, 15, 20, 20};
  int brr[] = {1, 12};

  // Calculate the size of the source arrays
  int n1 = sizeof(arr) / sizeof(arr[0]);
  int n2 = sizeof(brr) / sizeof(brr[0]);
  int n3 = n1 + n2;
  int c[n3];

  int i = 0;
  for (int j = 0; i < n1; j++, i++)
  {
    c[i] = arr[j];
  }

  for (int k = 0; k < n2; k++, i++)
  {
    c[i] = brr[k];
  }

  cout << "before sorting " << endl;
  printArray(c, n3);

  // sorting the c array using insertion sort
  insertSort(c, n3);

  cout << "after sorting :" << endl;
  printArray(c, n3);
  return 0;
}
