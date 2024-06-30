#include<iostream>
using namespace std;
int main(){
    int a[20],n,i,j,x,count=0;
    cout<<"Enter the number";
    cin>>n;
    cout<<"Enter your number";
    cin>>x;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]+a[j]==x){
            count++;
            cout<<a[i]<<endl;
            cout<<a[j]<<endl;
        }
    }
    }
    cout<<count;
}
