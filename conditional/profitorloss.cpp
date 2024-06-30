#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the cost price:"<<endl;
    cout<<"enter the selling price:"<<endl;
    cin>>cp>>sp;
    if(sp>cp)
    cout<<"seller makes profit:"<<endl;
    else if(sp<cp)
    cout<<"seller makes loss:"<<endl;
    else
    cout<<"seller makes no profit and no loss"<<endl;

}
