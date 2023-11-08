#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl; // Add a newline to separate the output.
}

int main() {
   // Create first array 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
   int brr[] = {9, 10, 11, 12, 13, 14, 15, 16};
   int n1 = sizeof(arr) / sizeof(arr[0]);
   int n2 = sizeof(brr) / sizeof(brr[0]);
   int n3 = n1 + n2;
   int c[n3];
  // n
   int i = 0;
   for (int j = 0; j < n1; j++) {
     c[i] = arr[j];
     i++;
   }

 // n
   for (int k = 0; k < n2; k++) {
     c[i] = brr[k];
     i++;
   }

   // Print the merged array
   printArray(c, n3); // n

   return 0;
}

// here we merge two sorted array using third variables 
//this time complexity of this probles is 