#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    //Base case
    if(n==0||n==1){
        return 1;
    }
    //Recursive relation
    int ans=n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Number to search ";
    cin>>n;
    int ans=factorial(n);
    cout<<"The factorial of "<<n<<" is "<<ans;
}