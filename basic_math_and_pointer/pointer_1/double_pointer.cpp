#include<iostream>
using namespace std;
int main(){
  int a = 4;
  int *p = &a;
  int **q = &p;
  // cout<<a<<endl;
  // cout<<&a<<endl; // this will give the address of the a
  // cout<<p<<endl; // this pointer p store the address of the a  variables 

  // cout<<&p<<endl;// this will gives the address of the pointer avriables  p 


  cout<<**q+34<<endl;
  return 0; 
}