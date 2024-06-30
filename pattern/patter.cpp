#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the no"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    { 
        j=1;
          char ch='A';
        while(j<=n)
        {
            cout<<ch;
            j++;
            ch++;
        }
        
        cout<<endl;
        i++;
    }
}