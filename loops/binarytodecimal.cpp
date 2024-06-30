#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int i=0;
    cin>>n;
    while(n!=0){
        int ans=0;
        ans=ans+pow(2,i);
        i++;
    n++;
    cout<<ans;
    }
}