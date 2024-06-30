#include<bits/stdc++.h>
using namespace std;
void count(int n){
    //base case
    if(n==1){
         cout<<n;
         return;
    }
    //recursive case
    cout<<n;
     count(n-1);
}
int main(){
    int n=5;
    count(n);
}
                 //or
#include<bits/stdc++.h>
using namespace std;
void count(int n){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    cout<<n<<endl;
    count(n-1);
}
int main(){
    int n=5;
    count(n);
}
                       //or
#include<bits/stdc++.h>
using namespace std;
int count(int n){
    //base case
    if(n==0||n==1){
        cout<<n;
        return n;
    }
    //recursive case
    cout<<n;
    return count(n-1);
}
int main(){
   int n=5;
   count(n);
}