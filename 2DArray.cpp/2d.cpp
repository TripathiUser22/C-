#include<iostream>
using namespace std;
int main(){
    int arr[10][10],m,n,i,j;
    cout<<"Enter the number of rows-->"<<" ";
    cin>>m;
    cout<<"Enter the number of columns-->"<<" ";
    cin>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Enter the value for("<<i<<","<<j<<"):";
            cin>>arr[i][j];
        }
    }
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
         cout<<arr[i][j];  
    }
    }
}