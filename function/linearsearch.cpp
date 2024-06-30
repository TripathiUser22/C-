#include<iostream>
using namespace std;
bool linear(int arr[100],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num[10]={1,5,6,7,8};
    int key;
    cout<<"Enter the key";
    cin>>key;
    bool found=linear(num,5,7);
    if(found){
        cout<<"Key is present";
    }
    else
    cout<<"key is not Present";
}