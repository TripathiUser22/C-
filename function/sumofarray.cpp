#include<iostream>
using namespace std;
int array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int num[10]={1,2,9,4,5};
    int k=array(num,5);
    cout<<k;
}