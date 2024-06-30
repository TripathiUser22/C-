#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],i,count1=0,count2=0,n,start,end;
    cout<<"Enter the size of an array"<<" ";
    cin>>n;
    cout<<"Enter the Number of Element"<<" ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    start=i,end=n-1;
    while(start<end){
    if(arr[start]<0)
    start++;
    else if(arr[end]<0){
        swap(arr[start],arr[end]);
        start++,end--;
    }
    else
    end--;
    }
    cout<<"After Filling no Oneside new Array is"<<" ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}