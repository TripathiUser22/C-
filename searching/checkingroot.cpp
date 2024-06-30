#include<bits/stdc++.h>
using namespace std;
int sqrt(int arr[],int size,int target){
    int i=0;
    int j=size-1;
    int mid=i+(j-i)/2;
    while(i<=j){
        int p=arr[mid]*arr[mid];
    if(p==target){
        return arr[mid];
    }
    else if(p>target){
        j=mid-1;
    }
    else{
        i=mid+1;
    }
    mid=i+(j-i)/2;
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the value of target"<<" ";
    cin>>target;
    int ans=sqrt(arr,n,target);
    cout<<ans;
}