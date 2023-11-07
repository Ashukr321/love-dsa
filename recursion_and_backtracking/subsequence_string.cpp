// subsequence in the string 
#include<iostream>
using namespace std;
void printSubSequencses(string str, string output , int i){
  if(i>=str.length()){
    cout<<output<<" ";
    return;
  }
  // exclude 
  printSubSequencses(str,output,i+1);

  // include  first we have to add string ith value in the output 
  output += str[i];
  printSubSequencses(str,output,i+1);
}
// main methods  start here .... 
int main(){
  string str = "abc";
  string output = "";
  int i = 0; 
  printSubSequencses(str,output , i);
  return 0; 
}