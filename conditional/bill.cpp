#include<iostream>
using namespace std;
int main()
{
    int bill,u;
    cout<<"enter the no of the unit:"<<endl;
    cin>>u;
    if(u<=100){
    bill=u*5;
    cout<<bill;
    }
    else if(100<u<=200){
    bill=5*100+(u-100)*5.50;
    cout<<bill;
    }
    else if(200<u<=300){
    bill=5*100+(u-100)*5.50+(u-200)*6+(u-300)*6.50;
    cout<<bill;
    }
}