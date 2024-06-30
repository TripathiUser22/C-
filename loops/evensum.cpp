#include<iostream>
using namespace std;
int main(){
    int i,s=0,n;
    cout<<"enter the number:";
    cin>>n;
    i=2;
    while(i<=n)
    {
        s=s+i;
        i=i+2;
    }
    cout<<s<<endl;
}