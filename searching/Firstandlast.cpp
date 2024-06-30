#include<bits/stdc++.h>
using namespace std;
int firstsearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        if(arr[mid]<target){
            s=mid+1;
        }
        else{
        e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastsearch(int arr[],int n,int target){
    int s=n-1;
    int e=0;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s>=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid+1;
        }
        if(arr[mid]>target){
            s=mid-1;
        }
        else{
        e=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={1,2,2,2,2,2,3,3,3,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=2;
    int ans=firstsearch(arr,n,target);
    cout<<"First Occurence is: "<<ans<<endl;
    int ans2=lastsearch(arr,n,target);
    cout<<"Last Occurrence is: "<<ans2;
}
    

    