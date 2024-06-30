#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    i=1;
    int a=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
        cout<<a;
        j++;
        a++;
    }
    cout<<endl;
    i++;
}
}