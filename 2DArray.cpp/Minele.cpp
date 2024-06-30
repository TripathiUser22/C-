#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10],m,n,i,j;
    cout<<"Enter the no of rows"<<" ";
    cin>>m;
    cout<<"Enter the no of columns"<<" ";
    cin>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int temp=arr[0][0];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]<temp){
                temp=arr[i][j];
            }
        }
    }
    cout<<temp;
}