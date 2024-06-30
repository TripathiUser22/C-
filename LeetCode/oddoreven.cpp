#include<iostream>
using namespace std;
int main(){
    int start,end,n,i,arr[10];
    cout<<"Enter the size-->";
    cin>>n;
    cout<<"Enter the Element-->";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    start=i;
    end=n-1;
    while(start<=end){
        if(arr[start]%2!=0){
            start++;
        }
        else{
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
for(i=0;i<n;i++){
    cout<<arr[i];
}
}