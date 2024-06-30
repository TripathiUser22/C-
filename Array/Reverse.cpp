#include<iostream>
using namespace std;
int main(){
    int a[10],n;
    cout<<"enter the number of element:";
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n;i++){
        for(i=n;i>=0;i--){
            cout<<a[i];
        }
        break;
    }
    }
                     //or
#include<iostream>
using namespace std;
int main(){
    int a[50],n,i,j;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the number of Elements:";
    for(i=0;i<=n;i++){
        cin>>a[i];
    }
    for(i=n;i>=0;i--){
        cout<<a[i];
    }
}