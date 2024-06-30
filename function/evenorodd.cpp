#include<iostream>
using namespace std;
int num(int n){
    if(n%2==0){
    cout<<"It is even";
    }
    else{
    cout<<"It is odd";
    }
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    num(n);
}
