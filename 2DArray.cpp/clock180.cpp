#include<bits/stdc++.h>
using namespace std;
void matri(int arr[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<arr[n-i-1][j]<<" "; 
        }
        cout<<endl;
    }
}
int main(){
    int arr[10][10],m,n;
    cout<<"Enter the Number of Rows"<<" ";
    cin>>m;
    cout<<"Enter the Number of Columns"<<" ";
    cin>>n;
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
matri(arr,m,n);
}