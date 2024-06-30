#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
    int main(){
        int n;
        cout<<"Enter the number";
        cin>>n;
        int a=fact(n);
        cout<<"factorial of a number is"<<a;
    }
