#include<iostream>
using namespace std;
int maxele(int arr[],int size){
    int max=arr[0];
    for (int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
    
}
int minele(int arr[],int size){
    int min=arr[0];
    for (int i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;

}
int main(){
    int size,num[100];
    cout<<"Enter The size of an Array";
    cin>>size;
    cout<<"Enter the  element of Array"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    int k=maxele(num,5);
    cout<<"Maximum Element of Array is:"<<k<<endl;
    int m=minele(num,5);
    cout<<"Minimum Element of Array is:"<<m;

}