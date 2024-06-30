#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;
    i=4;
    while(i<=n){
        j=4;
        while(j<=i){
            cout<<'*';
            j++;

        }
        cout<<endl;
        i--;
        
    }

}