#include<iostream>
using namespace std;
int main(){
    int arr[20],i,j,n;
    cout<<"Enter the size of an array->";
    cin>>n;
    cout<<"Enter the elements of an array->";
    for(i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            cout<<"Dublicate element of array is->"<<arr[i]<<" "<<"And"<<" "<<arr[j]<<endl;
            cout<<"Index of Dublicate element is->"<<i<<" "<<"And"<<" "<<j;
        }
    }
}
}
