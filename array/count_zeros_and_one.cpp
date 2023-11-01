// count the zeros and one int 
// count zero and one 
#include<iostream> 
using namespace std;
int main(){
  int arr[]= {0,0,1,1,0,1,0,1,0};
  int size = sizeof(arr)/sizeof(int);
  int count_zero = 0;
  int count_one =0;
  for (int i = 0; i < size; i++)
  {
    if(arr[i]==0){
      count_zero++;
    }
    if(arr[i]==1){
      count_one++;
    }
  }

  cout<<"count_zero :"<<count_zero<<endl;
  cout<<"count_one :"<<count_one<<endl;
  
  return 0; 
}