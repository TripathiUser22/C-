#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the Number";
    cin>>n;
    while(n)
    {
        n=(n&(n-1)) ;
        count++;
    }
    cout<<"No Of Non Zero is-->"<<count;
}