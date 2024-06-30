 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Press 1n for 100 note\n";
    cout<<"Press 2 for 200 note\n";
    cout<<"Press 3 for 50 note\n";
    cout<<"Press 4 for 20 note\n";
    cin>>n;
    int a;
    switch(n){
      case 1: 
      int c;
      cout<<"Enter the amount"; 
      cin>>a;
      c=a/100;
      cout<<"number of notes is:"<<c; 
      break;
      case 2:
      int d;
      cout<<"Enter the amount";
      cin>>a;
      d=a/200;
      cout<<"number of notes is:"<<d;
      break;
      case 3:
      int x;
      cout<<"Enter the amount";
      cin>>a;
      x=a/50;
      cout<<"number of notes is:"<<x;
      break;
       case 4:
      int y;
      cout<<"Enter the amount";
      cin>>a;
      y=a/20;
      cout<<"number of notes is:"<<y;
      default:
      cout<<"Nakli Note hai bhai";
    }

 }