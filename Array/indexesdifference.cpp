#include<iostream>
using namespace std;
int main(){
    int a[20],n,i,sum,sumeven=0,sumodd=0;
    cout<<"Enter the size of array";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            sumeven=sumeven+a[i];
        }
        else{
            sumodd=sumodd+a[i];
        }
    }
    sum=sumeven-sumodd;
    cout<<sum;
    return 0;
}
