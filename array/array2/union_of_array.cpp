#include<iostream>
#include<vector>
using namespace std;
// no duplication of the data 

int main(){

  int arr[]= {1,2,3,4};
  int brr[]= {5,6,7,8};
  int s1 = sizeof(arr)/sizeof(int);
  int s2 = sizeof(brr)/sizeof(int);
  vector<int>v;
  //create a vector array 
  for (int i = 0; i < s1; i++)
  {
    v.push_back(arr[i]);
  }
  for (int i = 0; i < s2; i++)
  {
    v.push_back(brr[i]);
  }

  // printing all the elements of the  vector 
 
  for(auto x:v){
    cout<<x<<" ";
  }
  

  
    
}