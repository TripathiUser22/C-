#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a:"<<endl;
    cout<<"enter the value of b:"<<endl;
    cout<<"enter the value of c:"<<endl;
    cin>>a>>b>>c;
    if(a>b&&a>c&&b+c>a||b>a&&b>c&&a+c>b||c>a&&c>b&&a+b>c)
    cout<<"Triangle is valid"<<endl;
    else
    cout<<"Triangle is not valid"<<endl;
}