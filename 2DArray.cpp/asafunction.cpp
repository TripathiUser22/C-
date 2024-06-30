#include<iostream>
using namespace std;
void darray(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             cout<<arr[i][j];
        }
    }

}
int main(){
    int arr[3][4]={2,1,2,4,5,8,7,4,6,9,6,0},i,j,target;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
    }
    darray(arr,4,3);
}