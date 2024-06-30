#include<bits/stdc++.h>
using namespace std;
bool sames(string a,string b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int count=0;
    int sizea=b.size();
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]&&a[i]!=a[i+1]){
                count++;
            }
        }
    }
    // cout<<count;
if(count==sizea){
    return 1;
}
else 
return 0;
}
int main(){
    string s="tripathi";
    string b="tripz";
    bool found=sames(s,b);
    if(found){
        cout<<"It is a part of string";
    }
    else{
        cout<<"It is not a part of string";
    }
}