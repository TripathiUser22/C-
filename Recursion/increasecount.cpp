#include<bits/stdc++.h>
using namespace std;
void count(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive relation
    count(n-1);
    cout<<n;
}
int main(){
    int n=5;
    count(n);
}