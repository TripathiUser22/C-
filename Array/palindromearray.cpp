#include<bits/stdc++.h>
using namespace std;
bool palin(int arr[5],int size){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==arr[size-i-1]&&i<size/2-1){
            return 1;
        }
    }
    return false;
}
int main(){
    int arr[10]={1,2,3,2,1};
    int size=5;
    bool found=palin(arr,size);
    if(found){
        cout<<"It is palindrome";
    }
    else
    cout<<"it is not palindrome";
}