#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter the side of a:"<<endl;
    cout<<"enter the side of b:"<<endl;
    cout<<"enter the side of c:"<<endl;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
     cout<<"it is right angle triangle"<<endl;
     else if(a==b&&b==c)
     cout<<"it is equilateral triangle"<<endl;
     else if(a==b||b==c||c==a)
     cout<<"it is equilateral triangle"<<endl;
     else
     cout<<"it is scaler triangle"<<endl;
}