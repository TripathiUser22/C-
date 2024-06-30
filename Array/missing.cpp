#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n){
    int sum=0,summis=0,miss;
        for(int i=1;i<=n;i++){
            // sum=nums.size()*(nums.size()+1)/2;
            sum=n*(n+1)/2;
        }
        for(int i=1;i<=n-1;i++){
            summis=summis+arr[i];
        }
        miss=sum-summis;
        return miss;
        
}
int main(){
    int arr[]={0,1,2,3,4,5,7};
    int size=6;
    int ans=missing(arr,size);
    cout<<ans;
}