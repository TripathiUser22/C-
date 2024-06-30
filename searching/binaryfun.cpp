#include<bits/stdc++.h>
using namespace std;
bool firstoccur(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return true; 
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
        e=mid-1;
        mid=s+(e-s)/2;
        }
    }
    return false;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=6;
    bool found=firstoccur(arr,size,target);
    if(found){
        cout<<"It is present";
    }
    else
    cout<<"It is not present";
}