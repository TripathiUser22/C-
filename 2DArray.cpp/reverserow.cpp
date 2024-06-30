#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10],i,j,m,n;
    cout<<"Enter the size of rows"<<" ";
    cin>>m;
    cout<<"Enter the size of column"<<" ";
    cin>>n;
    cout<<"Enter the elements"<<" "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Array before row reverse is"<<" "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Array after Row reverse is"<<" "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}