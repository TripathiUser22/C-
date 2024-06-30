#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
        return false;
        }
       
} 
 return true;
}
int main(){
    int n;
    cout<<"Enter the Number"<<" ";
    cin>>n;
    bool found=checkprime(n);
    if(found){
        cout<<"It is a Prime Number";
    }
    else
    cout<<"It is Not a Prime Number";
}