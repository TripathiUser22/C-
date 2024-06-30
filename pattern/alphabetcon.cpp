#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the no"<<" ";
    cin>>n;
    char ch='A';
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}