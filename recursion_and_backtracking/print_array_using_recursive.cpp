#include<iostream>
using namespace std;
void printArray(int arr[],int n ,int i){
  // base case 
  if(i>=n){
    return ;
  }
  cout<<arr[i]<<endl;
  printArray(arr,n,i+1);
}

int main(){
  //create the array 
  int arr[]={10,20,30,40,50};
  int n = sizeof(arr)/sizeof(int);
  int i = 0;
  printArray(arr,n,i);
  return 0; 
}