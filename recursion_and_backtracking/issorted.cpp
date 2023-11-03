#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector <int>&v,int n , int i){
  // create base case 
  if(i==n-1){
    return true;
  }
  if(v[i]>v[i+1]){
    return false;
  }
  // calling rest array  using recursive call 
  return checkSorted(v,n,i+1);
}



// main methods start here ... 
int main(){
  // create vector 
  vector<int> v{10,20,30,40,50};
  int n = v.size();
  int i  = 0;
  bool isSorted = checkSorted(v,n,i);
  if(isSorted){
    cout<<"sorted"<<endl;
  }else{
    cout<<"not sorted"<<endl;
  }

  return 0;
}