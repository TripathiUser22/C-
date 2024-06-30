#include<iostream>
using namespace std;
int main(){
    char str[20]="kaRAnTriPAthi";
    for(int i=0;str[i]!='\0';i++){
     if(islower(str[i])){
        str[i]=toupper(str[i]);
     }   
     else if(isupper(str[i])){
            str[i]=tolower(str[i]);
     }
     cout<<str[i];
    }
}