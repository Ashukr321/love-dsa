#include<iostream>
using namespace std;
int main(){
  int a = 23;
  int b  = 23;
  int *ptr= &a;
  cout<<*ptr*2<<endl;
  
  return 0;
}