#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    int m;
    cout<<"enter the number of cols"<<endl;
    cin>>m;

    for (int i = 0; i <n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<" * "<<" ";

        }
        cout<<endl;
        
    }
    
    return 0;
}