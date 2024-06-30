#include<iostream>
using namespace std;
int main(){
    int arr[10],i,j,n,target,ans=0;
    cout<<"Enter the Number of Element"<<" ";
    cin>>n;
    cout<<"Enter the elements-->"<<" ";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            target=arr[j]-arr[i]; 
            if(target>ans){
                ans=target;
            }
        } 
    }
    cout<<ans;
}