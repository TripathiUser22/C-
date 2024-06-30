#include<bits/stdc++.h>
using namespace std;
void str(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"It is a anagram";
    }
    else{
        cout<<"It is not anagram";
    }

}
int main(){
string a="anagram";
string b="gaaramn";
str(a,b);
}