#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 5; j++)
        {
           if(i==0||i==2)
           {
                cout<<" * ";
           }
           else
           {
                if(j==1||j==4){
                cout <<" * ";
                }else{
                cout << " _ " ;
                }
           }
        }
        cout << endl;
        
    }
    
    return 0; 
}