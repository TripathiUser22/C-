#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>arr(3,vector<int>(3));
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}