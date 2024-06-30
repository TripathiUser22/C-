#include<bits/stdc++.h>
using namespace std;
void remove(int arr[],int size,int target){
    int i=0;
    int j=size-1;
    while(i<=j){
        if(arr[i]==target){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else{
            i++;
        }
       
    }
    for(i=0;i<j;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1,2,2,3,4,5,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target =5;
    remove(arr,size,target);
}
                    //OR
// void remove(int arr[],int size,int target){
//     int count=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             continue;
//         }
//         else{
//             cout<<arr[i]<<endl;
//             count++;
//         }
//     }
//       cout<<"size of array->"<<" "<<count<<endl;
// }