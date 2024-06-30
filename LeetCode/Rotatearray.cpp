#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i,temp,k,ans;
    cout<<"Enter the size of an array"<<" ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    temp=arr[n-1];
    for(i=n-1;i>=1;i--){
        swap(arr[i],arr[i-1]);
    }
    for(i=0;i<n;i++){
        if(i==0){
            arr[i]=temp;
            cout<<arr[i];
        }
        else{
        cout<<arr[i];
        }
    }
}