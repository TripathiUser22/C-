#include<iostream>
using namespace std;
int main()
{
    int i,f=1,n;
    cout<<"enter the value";
    cin>>n;
    i=1;
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    cout<<f;
}
