#include<bits/stdc++.h>
using namespace std;
void printsub(string str,int i,string out){
    //base case
    if(i==str.size()){
        cout<<out<<" ";
        return;
    }
    char ch=str[i];
    //include case
    printsub(str,i+1,out+ch);
    //exclude case
    printsub(str,i+1,out);
}
int main(){
    string str="karan";
    string er="";
    int i=0;
    printsub(str,i,er);
}