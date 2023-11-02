#include<iostream>
using namespace std;
void printNum(int n){
  // base case 
  if (n==0) return;
  cout<<n<<endl;
  printNum(n-1);
}
int main(){
  int n ;
  cout<<"enter  your number"<<endl;
  cin>>n;
  printNum(n);
  return 0; 
}