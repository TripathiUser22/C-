#include<iostream>
using namespace std;
int main(){
    int arr[10],start,end,i;
    int n;
    cout<<"Enter the size of array-->";
    cin>>n;
    start=0;
    end=n-1;
    cout<<"Enter the Elements-->";
    for(i=start;i<end;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element";
    cin>>target;
    while(start<end){
        if(arr[start]+arr[end]==target){
        cout<<start<<endl;
        cout<<end<<endl;
        }
        else if(arr[start]+arr[end]<target){
        start++;
        }
        else
        end--;
    }
    cout<<start<<" "<<end;
}