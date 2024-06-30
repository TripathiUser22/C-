#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i<=5&&j==8||i==1||j==1||i==5||i==j&&i>=5)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}