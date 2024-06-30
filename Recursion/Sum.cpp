#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    //base case 
    if(n==0||n==1){
        return n;
    }
    //recursive relation
    int ans=sum(n-1)+n;
    return ans;
}
int main(){
    int n=5;
    cout<<sum(n);
}