#include<bits/stdc++.h>
using namespace std;
void key(int arr[],int size ,int target){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<arr[j];
            }
        }
    }
}
int main(){
    int arr[100],n,i,value;
    cout<<"Enter the size of an array"<<" ";
    cin>>n;
    cout<<"Enter the Item to be searched"<<" "<<endl;
    cin>>value;
    for(i=0;i<n;i++){
        cout<<"Enter the Element "<<i<<" ";
        cin>>arr[i];
    }
    key(arr,n,value);
}