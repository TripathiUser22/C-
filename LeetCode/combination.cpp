#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int ncr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int x=num/deno;   
     return x;
}
int main(){
    int n,r;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the value of r";
    cin>>r;
    int ans=ncr(n,r);
    cout<<ans;
}