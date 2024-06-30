#include<bits/stdc++.h>
using namespace std;
int number(int n){
    int i,ans=0;
    for(i=0;i<n;i++){
        int d;
        cout<<"Enter the Digits"<<" ";
        cin>>d;
        ans=ans*10+d;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the digit of Making number"<<" ";
    cin>>n;
    int ans=number(n);
    cout<<ans;
}