#include<iostream>
using namespace std;
int main(){
    int n,i,a=0;
    cout<<"enter the number:";
    cin>>n;
    i=2;
    while(i<=n/2)
    {
            if(n%2==0)
        {
        a++;
        break;
        }
        i=i+1;
    }
    if(a==0)
    cout<<"it is prime no"<<endl;
    else
    cout<<"it is not prime no"<<endl;
}