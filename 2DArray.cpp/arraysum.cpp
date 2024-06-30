#include<iostream>
using namespace std;
int main(){
    int arr1[10][10],arr2[10][10],arr[10][10],i,j,m1,n1,m2,n2;
    cout<<"Enter the Rows of first Array-->";
    cin>>m1;
    cout<<"Enter the Columns of first Array-->";
    cin>>n1;
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
        cin>>arr1[i][j];
    }
}
    cout<<"Enter the Rows of second Array-->";
    cin>>m2;
    cout<<"Enter the Columns of second Array-->";
    cin>>n2;
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
        cin>>arr2[i][j];
    }
}
for(i=0;i<m1;i++){
    for(j=0;j<n1;j++){
        arr[i][j]=arr1[i][j]+arr2[i][j];
    }
}
for(i=0;i<m1;i++){
    for(j=0;j<n1;j++){
        cout<<arr[i][j];
    }
}
}
