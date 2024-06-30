#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<9;j++){
            if(j==3-i||(j==3+i&&i<=3||(i==4&&j<5))){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int b=7;
    pattern(b);
}