#include<bits/stdc++.h>
using namespace std;
void str(string ch){
    int index=0;
    while(ch[index]!='\0'){
        char curr=ch[index];
        if(curr>='a'&&curr<='z'){
            curr=ch[index]-'a'+'A';
             cout<<curr;
        }

        index++;
    }
}
int main(){
    string ch;
    cout<<"Enter the lower case string"<<" ";
    getline(cin,ch);
    str(ch);
}