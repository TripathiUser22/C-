#include<iostream>
using namespace std;
int main(){
    int n,a[20],i,x;
    cout<<"Enter the Size of array";
    cin>>n;
    cout<<"Enter your number";
    cin>>x;
    int count=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>x){
            count++;
        }
    }
    cout<<count;
}