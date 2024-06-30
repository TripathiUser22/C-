#include<iostream>
using namespace std;
int main(){
    int i,n,a=0,b=1,next;
    cout<<"enter the number";
    cin>>n;
    cout<<a<<b;
    for(i=1;i<=n-2;i++)
    {
        next=a+b;
        cout<<next;
        a=b;
        b=next;
    }

}