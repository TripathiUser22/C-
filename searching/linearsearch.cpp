#include<iostream>
using namespace std;
int main(){
    int i ,a[100],n,item,loc;
    cout<<"enter the number of element";
    cin>>n;
    cout<<"Enter the elements";
    for(i=1;i<=n;i++)
    {
      cin>>a[i];
    }
    cout<<"enter the item to be searched";
     cin>>item;
     i=0;
    while(i<n)
    {
        if(a[i]==loc)
        {
            loc=i;
            break;
        }
        else
        i=i+1;
    }
    if(i==n)
    cout<<"item is not found";
    else
    cout<<"location="<<loc; 
}