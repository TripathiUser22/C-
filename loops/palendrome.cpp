#include<iostream>
using namespace std;
int main(){
    int x,m,r=0,d;
    cout<<"enter the number to check";
    cin>>m;
    x=m;
    while(m!=0)
    {
        d=m%10;
        r=r*10+d;
        m=m/10;

    }
    if(x==r)
    cout<<"it is palendrome";
    else
    cout<<"not palendrome";
}
    