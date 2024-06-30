#include<iostream>
using namespace std;
void sample(int arr[],int size){
    int i=0;
    int j=i+1;
    while(j<size){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    cout<<i+1<<endl;
    for(int k=0;k<=i;k++){
        cout<<arr[k];
    }
}
int main(){
    int arr[]={1,1,2,2,3,4,4,5,5,6,6,7,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    sample(arr,n);
}