#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={10,20,40,100,70,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=peak(arr,n);
    cout<<"Peak ELement In Mountain array is at"<<" "<<ans<<" "<<"Index"; 
}