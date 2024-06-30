#include<iostream>
using namespace std;
int main(){
    int arr[10][10],arr2[10][10],m,n,i,j;
    cout<<"Enter the number of rows-->"<<" ";
    cin>>m;
    cout<<"Enter the number of columns-->"<<" ";
    cin>>n;
    cout<<"Enter the element of an array-->"<<" ";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        }
        cout<<endl;
    }

}