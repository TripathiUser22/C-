#include<iostream>
using namespace std;
bool prime(int n){
    int count=0,i;
    for(i=0;i<n;i++){
        if(n%i==0){
            count++;
        }
        if(count==2){
            return true;
        }
        else
        return false;
    }
}
    int main(){
        int n;
        cout<<"Enter The number";
        cin>>n;
        prime(n)?cout<<"It is prime number":cout<<"It is not a prime number";
    }
