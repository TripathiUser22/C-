#include<bits/stdc++.h>
using namespace std;
int sumarray(int arr[],int size){
    int sum=0,i;
    for(i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100],n,i;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the value "<<i<<":";
        cin>>arr[i];
    }
    int sum=sumarray(arr,n);
    cout<<sum;

}