#include<bits/stdc++.h>
using namespace std;
void colsum(int arr[][3],int rowsize,int colsize){
    int i,j;
    for(i=0;i<colsize;i++){
        int sum=0;
        for(j=0;j<rowsize;j++){
            sum=sum+arr[i][j];
        }
         cout<<sum;
    }
   
    // cout<<sum;
}
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}
};
int rowsize=3;
int colsize=3;
colsum(arr,rowsize,colsize);
}