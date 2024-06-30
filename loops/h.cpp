#include<bits/stdc++.h>
using namespace std;
int ham(int n){
    int count=0;
    while(n!=0){
        int bit=n&1;
        if(bit==1){
        count++;
        bit=n>>1;
        }
       
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int ans=ham(n);
    cout<<ans;
}