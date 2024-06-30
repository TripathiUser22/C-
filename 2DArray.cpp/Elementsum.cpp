#include<iostream>
using namespace std;
int main(){
    int m,n,i,j,sum=INT16_MIN,arr[10][10],index=0;
    cout<<"Enter the value of Rows-->";
    cin>>m;
    cout<<"Enter the value of Columns-->";
    cin>>n;
    cout<<"Enter The ELements";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        int total=0;
        for(j=0;j<n;j++){
            total+=arr[i][j];
            if(sum<total){
                sum=total;
                index=i;
            }
        }
    }
    cout<<"Largest index value is-->"<<index;
}