#include<iostream>
using namespace std;
int main(){
  int n ;
  cout<<"enter the value of the n "<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    // spaces 
    for (int j = 0; j < n-i-1; j++)
    {
      cout<<" ";
    }
    
    // stars 
    for(int j = 0; j<i+1; j++){
      cout << "* ";
    }
    cout<<endl;
  }
  
  return 0;
}