#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"Enter the Size of vector-->"<<" ";
    cin>>x;
    int i,n;
    vector<int>v(x);
    cout<<"Enter the element-->"<<" ";
    for(i=0;i<x;i++){
        cin>>v[i];
    }
    int max=v[0];
    sort(v.begin(),v.end());
    for(i=0;i<x;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    cout<<"Maximum Element of an array is-->"<<" "<<max<<endl;
    int secondmax=max;
    for(i=x;i>=0;i--){
        if(v[i]<secondmax){
            secondmax=v[i];
            break;
        }
    }
    cout<<"Second maximum element is-->"<<" "<<secondmax;

}