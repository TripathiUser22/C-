#include<iostream>
using namespace std;
int pow(int a , int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
    }
int main(){
    int a;int b;
    cin>>a>>b;
    pow(a,b);
    cout<<pow(a,b);
    return 0;
}
