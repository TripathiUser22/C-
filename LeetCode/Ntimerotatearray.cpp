#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i,temp,k,ans[10];
    cout<<"Enter the size of an array-->"<<" ";
    cin>>n;
    cout<<"Enter the Element of an array-->"<<" ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Rotation-->"<<" ";
    cin>>k;
    for(i=0;i<n;i++){
        ans[(i+k)%n]=arr[i];
    }
    cout<<"Array after given rotation is"<<" ";
    for(i=0;i<n;i++){
        cout<<ans[i];
    }
}