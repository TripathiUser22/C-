#include<bits/stdc++.h>
using namespace std;
void bubbleincrese(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Bubble sort in incresing order is ";
    for(int k=0;k<size;k++){
        cout<<arr[k];
    }
    cout<<endl;
}
void bubbledecrease(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]<arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    cout<<"Bubble sort in decreasing order is ";
    for(int k=0;k<size;k++){
        cout<<arr[k];
    }
}
int main(){
    int arr[]={5,1,7,8,3,2,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleincrese(arr,size);
    bubbledecrease(arr,size);
}