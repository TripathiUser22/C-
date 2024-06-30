#include<iostream>
using namespace std;
int main(){
    int n,s=0,p=1;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0){
        int d=n%10;
        p=p*d;
        s=s+d;
        n=n/10;
    }
    int z=p-s;
    cout<<z<<endl;
}