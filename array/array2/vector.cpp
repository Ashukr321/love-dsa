#include<iostream>
#include <vector>
using namespace std;
 
// main method start here ..
int main(){
  //creating vector ;
  vector<int>arr;
  arr.push_back(13);
  arr.push_back(1);
  arr.push_back(3);
  arr.push_back(3);
  arr.push_back(4);

  for (int i = 0; i < arr.size(); i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  cout<<arr.capacity()<<endl;
  cout<<arr.size()<<endl;
  cout<<arr.empty()<<endl;
  // 0 for false ;
  // 1 for the true 
  
}

// methods of the vector
// push_back 
// pop_back
// insert(pos,val)
// erase(pos)
// clear()
// empty()
// size()