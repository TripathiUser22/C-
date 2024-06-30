#include<bits/stdc++.h>
using namespace std;
void matri(int arr[][10],int b[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[j][i]=arr[j][n-1-i];
           cout<<b[j][i]<<" "; 
        }
        cout<<endl;
    }
}
int main(){
    int arr[10][10],b[10][10],m,n;
    cout<<"Enter the Number of Rows"<<" ";
    cin>>m;
    cout<<"Enter the Number of Columns"<<" ";
    cin>>n;
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
matri(arr,b,m,n);
}