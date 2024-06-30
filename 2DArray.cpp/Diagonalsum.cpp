#include<iostream>
using namespace std;
int main(){
    int arr[10][10],m,n,i,j,sumrows=0,sumcol=0;
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j)
            sumrows=sumrows+arr[i][j];
            else if(j==(n-i))
            sumcol=sumcol+arr[i][j];
        }
    }
    cout<<sumrows<<endl;
    cout<<sumcol+1<<endl;
}