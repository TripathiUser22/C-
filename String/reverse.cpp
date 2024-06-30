#include<iostream>
using namespace std;
void reverse(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    

}
int length(char ch[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            ans++;
        }
    }
    return ans;
}
int main(){
    char arr[10];
    cin.getline(arr,100);
    int n=sizeof(arr)/sizeof(arr[0]); 
    int len=length(arr,n);
    reverse(arr,len);
    cout<<arr<<endl;
}