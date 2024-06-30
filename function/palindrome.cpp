#include<iostream>
using namespace std;
int palen(int n)
{
    int r=0,i,d,x;
    x=n;
    for(i=1;i<=n;i++)
    {
      d=n%10;
      r=r*10+d;
      n=n/10;
    }
    if(r==x)
    cout<<"it is pallendrome";
    else
    cout<<"it is not pallindrome";
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    palen(n);
}