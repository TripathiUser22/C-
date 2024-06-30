#include<iostream>
using namespace std;
int main(){
    int sum=0,pro=1,n,d;
    cout<<"Enter the Number"<<" ";
    cin>>n;
    while(n!=0){
        d=n%10;
        pro=pro*d;
        sum=sum+d;
        n=n/10;
    }
    int ans=pro-sum;
    cout<<ans<<" ";
}