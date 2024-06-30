#include<bits/stdc++.h>
using namespace std;
int repeat(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]<arr[i+1]){
            arr[i]=arr[i+1];
        }
        else
        return arr[i];
    }
}
int main(){
    int arr[]={10,20,40,50,400,600,7,8,5,34,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=repeat(arr,n);
    cout<<ans;
}