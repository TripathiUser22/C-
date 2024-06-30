#include<iostream>
using namespace std;
int main(){
    int arr[10][10],i,j,m,n,target;
    cout<<"Enter The Number of Rows-->";
    cin>>m;
    cout<<"Enter The Number of columns-->";
    cin>>n;
    cout<<"Enter The Elements-->";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
    cout<<"Enter the element to be searched-->";
    cin>>target;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==target){
            cout<<"The Number is Present";
        }
    }
    
}

}