#include<iostream>
using namespace std;
 void swap(int *a , int *b){
  int temp = *a;
    *b = *a;
  *b = temp;
 }
int main(){
  int arr[]={1,2,3,4,5,6,7,8};
  int n = size(arr);
  int i = 0;
  int j = n-1;
 
  while (i<j)
  {
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
  
  for (int k=0 ;k<n;k++){
 cout<<arr[k]<<" ";
  }

  return 0;
}