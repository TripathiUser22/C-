#include<bits/stdc++.h>
using namespace std;
void selectdecre(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Sorted array in decreasing order ";
    for(int k=0;k<size;k++){
        cout<<arr[k];
    }
    cout<<endl;
}
void selectincre(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
         swap(arr[i],arr[minindex]);
    }
    cout<<"Sorted array in increasing order ";
    for(int k=0;k<size;k++){
        cout<<arr[k];
    }
    cout<<endl;
}
int main(){
    int arr[]={8,6,9,11,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    selectincre(arr,size);
    selectdecre(arr,size);
}