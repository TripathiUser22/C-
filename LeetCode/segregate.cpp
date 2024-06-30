#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,1,1};
    int start=0,end=5;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++,end--;
            }
            else
            end--;
        }
    }
    for(int i=0;i<=5;i++){
    cout<<arr[i];
    }
}
                   
                            //OR



#include<iostream>
using namespace std;
int main(){
    int count0=0,count1=0,i;
    int arr[]={0,1,1,0,0};
    for(i=0;i<5;i++){
        if(arr[i]==0)
        count0++;
        else
        count1++;
    }
    cout<<count0<<count1<<endl;
    for(i=0;i<count0;i++){
        arr[i]=0;
        cout<<arr[i];
    }
    for(i=count0;i<5;i++){
        arr[i]=1;
        cout<<arr[i];
    }

}                   
