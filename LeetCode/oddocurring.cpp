#include<bits/stdc++.h>
using namespace std;
int odd(int arr[],int n){
    int ans=0;
    int i;
    for(i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1,1,2,2,3,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=odd(arr,n);
    cout<<ans;
}