#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter the value"<<endl;
cin>>ch;
int ascii;
ascii=ch;
if(97<ascii<=122){
cout<<"lower case"<<endl;
}
else if(65<=ascii<=90){
cout<<"upper case "<<endl;
} 
else{
cout<<"it is numeric"<<endl;
}
}