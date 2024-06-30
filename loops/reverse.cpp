#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,digit;
    cout<<"enter the no";
    cin>>n;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<rev;
}