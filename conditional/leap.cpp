#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"enter the year:"<<endl;
    cin>>y;
    if(y%400==0&&y%100==0||y%100!=0&&y%4==0)
    cout<<"it is leap year"<<endl;
    else
    cout<<"It is not leap year"<<endl;
} 