#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,arr[20],count=0,count2=0,sum1=0,tsum=0,n;
    cout<<"Enter the size"<<" ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        count++;
        tsum=arr[i]+tsum;
    }
    cout<<count<<endl;
    int k;
    cout<<"Total no of missing element"<<" ";
    cin>>k;
    for(i=0;i<n-k;i++)
    {
        cin>>arr[i];
        count2++;
        sum1=arr[i]+sum1;
    }
    cout<<count2;
    for(i=0;i<n;i++){
        if(count2<=count){
            tsum=tsum-sum1;
        }
        cout<<tsum;
        sum1=sum1+tsum;
    }

}