#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the Rows and Columns";
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i==1||j==1||i==j||i==n||j==n||j==n+1-i){
        cout<<"*";
      }
        else
        cout<<" ";
      }
      cout<<"\n";
    }
  }
