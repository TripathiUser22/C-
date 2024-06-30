#include<iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cout<<"Press 1 for Addition:"<<endl;
    cout<<"Press 2 for Subtraction:"<<endl;
    cout<<"Press 3 for Multiplication:"<<endl;;
    cout<<"Press 4 for Division:"<<endl;;
    cin>>n;
    switch(n){
        case 1:
        cout<<"enter the value of a"<<endl;
        cout<<"enter the value of b"<<endl;
        cin>>b>>c;
        a=b+c;
        cout<<"sum is"<<" "<<a;
        break;
        case 2:
        cout<<"enter the value of a"<<endl;
        cout<<"enter the value of b"<<endl;
        cin>>b>>c;
        a=b-c;
        cout<<"Substraction is"<<" "<<a;
        break;
        case 3:
        cout<<"enter the value of a"<<endl;
        cout<<"enter the value of b"<<endl;
        cin>>b>>c;
        a=b*c;
        cout<<"Multiplation is"<<" "<<a;
        break;
        case 4:
        cout<<"enter the value of a"<<endl;
        cout<<"enter the value of b"<<endl;
        cin>>b>>c;
        a=b/c;
        cout<<"Division"<<" "<<a;
        break;
        default:
        cout<<"Invalid Data";

    }

}