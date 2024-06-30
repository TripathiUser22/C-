#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,n,s=0,d;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<=n;i++){
        d=n%10;
        s=(d*pow(10,i))+s;
        n=n/10;
    }
cout<<s<<endl;
}