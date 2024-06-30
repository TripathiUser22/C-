#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,r,t;
    cout<<"enter the cordinates and radius of the circle"<<endl;
    cin>>a>>b>>r;
    cout<<"enter the points"<<endl;
    cin>>c>>d;
    t=sqrt(pow((a-b),2)+pow((c-d),2));
    if(t>r)
    cout<<"point lies outside the circle"<<endl;
    else
    cout<<"point lies inside the circle"<<endl;
}