// find the max elements of the array 
#include<iostream>
using  namespace std;
int main(){
  int arr[]= {3,41,3,41,32,13,4,13,41,34,13};
  int size = sizeof(arr)/sizeof(int);
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i]>max)
    {
      max = arr[i];
    }
    if(arr[i]<min){
      min = arr[i];
    }
    
  }
  cout<<"maximum elements of the array : "<<max<<endl;
  cout<<"minimum elements of the array : "<<min<<endl;
  
  return 0; 
}