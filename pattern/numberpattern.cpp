#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"enter the no of rows";
    cin>>m;
    cout<<"enter the no of columns";
    cin>>n;
    i=1;
    while(i<=m)
    {
        j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}