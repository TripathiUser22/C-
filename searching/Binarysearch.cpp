#include<iostream>
using namespace std;
int binary(int arr[],int n,int target){
    int start=0,mid;
    int end=n-1;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return arr[mid];
        }
        else if(arr[mid]>target){
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return -1;
}
    int main(){
        int arr[100],n,i;
        cout<<"Enter The Size of array";
        cin>>n;
        cout<<"Enter The Element";
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the element to search";
        cin>>key;
        cout<<binary(arr,n,key);
        return 0;

    }