#include<iostream>
using namespace std;
int main(){
    int i,n,a[100];
    cout<<"Enter the no of elements";
    cin>>n;
    cout<<"Enter the elements";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    for(i=0;i<n;i++){
    if(max<a[i]){
        max=a[i];
    }
}
cout<<"Largest element is"<<max;
}