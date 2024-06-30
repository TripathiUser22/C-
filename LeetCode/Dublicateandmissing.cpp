#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10],sum=0,sum1=0,n,i,j;
    cout<<"Enter the size Of an array"<<" ";
    cin>>n;
    cout<<"Enter the elements"<<" ";
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<"DubliCate Element of an array"<<" "<<arr[i]<<endl;
            }
        }
        if(arr[i]=arr[j]){
            break;
        }
        else
        sum1=sum1+arr[i];
    }
    cout<<sum1;

}