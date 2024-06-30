#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number";
    cin>>n;
    i=n;
    while(i<=n*10)
    {
        cout<<i<<endl;
        i=i+n;
    }

}