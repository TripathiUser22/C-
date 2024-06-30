#include<iostream>
using namespace std;
int main(){
    char ch[50]="Ka ra n tr i pa thi";
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]==' '){
            i=i+1;
        }
        cout<<ch[i];
    }

}