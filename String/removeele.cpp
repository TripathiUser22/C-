#include<bits/stdc++.h>
using namespace std;
void remove(char ch[],int n){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='a'){
            ch[i]=int(50);//for smily put 2 only
            //for giving space always use single inverted comma' ' 
        }
        i++;
    }

}
int main(){
    char ch[100];
    int size,target;
    size=sizeof(ch)/sizeof(ch[0]);
    cout<<"Enter the string"<<" ";
    cin>>ch;
    // cout<<"Enter the target";
    // cin>>target;
    remove(ch,size);
    cout<<ch;
}