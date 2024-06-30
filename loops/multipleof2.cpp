#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=30;i++)
    {
        int a=pow(2,i);
        if(a==n)
        cout<<"true";
        else{
        cout<<"false";
        break;
        }

    }
}