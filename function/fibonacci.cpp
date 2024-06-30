#include<iostream>
using namespace std;
int fibo(int a,int b,int n){
    int next;
    a=0;
    b=1;
    for(int i=1;i<=n;i++){
    next=a+b;
    b=next;
    a=b;
    }
    return next;
}
    int main(){
        int x;
        cout<<"Enter the number:";
        cin>>x;
        int a=fibo(0,1,x);
        cout<<a;

    }