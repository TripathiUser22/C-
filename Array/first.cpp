#include<iostream>
using namespace std;
int main(){
    int a[50],i,n;
    cout<<"Enter the number of element:";
    cin>>n;
    cout<<"enter the element"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the value for("<< i <<"):";
        cin>>a[i];
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i]){
        max=a[i];
        }
    }
     cout<<max;
    return 0;    
}