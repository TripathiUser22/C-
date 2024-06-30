#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int> >matrix(4,vector<int>(4,3));
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;i++){
    //         cout<<matrix[i][j];
    //     }
    // }
    cout<<"Row are-->"<<matrix.size()<<endl;
    cout<<"colums are-->"<<matrix[0].size()<<endl;
}