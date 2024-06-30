#include<iostream>
using namespace std;
int main(){
    char ch[50]="KaranTripathi",i;
    for(i=0;ch[i]!=0;i++){
        if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='O'||ch[i]=='o'||ch[i]=='u'||ch[i]=='U'){
            i=i+1;
        }

        cout<<ch[i];
    }
    
}