#include<iostream>
using namespace std;
int fib(int n){
 if(n==1){
  return 0;
 } 
 if (n==2)
 {
  return 1;
 }
 
  return fib(n-1)+fib(n-2);
}

int main(){
  int n ;
  cout<<"enter the term you want to see "<<endl;
  cin>>n;
  int ans = fib(n);
  cout<<n<<"th term elements is :"<<ans<<endl;
}