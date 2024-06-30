#include<bits/stdc++.h>
using namespace std;
bool pallin(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else
        return false;
    }
        return true;
        }
int length(char ch[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            break;
    }
    else{
        count++;
    }
}
 return count;
}

int main(){
    char ch[100];
    cin.getline(ch,99);
    int n=sizeof(ch)/sizeof(ch[0]);
    int ans=length(ch,n);
    cout<<ans<<endl;
    bool found=pallin(ch,ans);
    if(found){
        cout<<"It is Pallindrome";
    }
    else
    cout<<"It is not pallindrome";
}
              //OR
// #include<iostream>
// using namespace std;
// bool pallin(char ch[],int n){
//     int i;
//     int count=0;
//     for(i=0;i<(n/2);i++){
//         if(ch[i]==ch[n-i-1]){
//             count++;
//         }
//     }
//         if(count==n/2){
//             return true;
//         }
//         return false;
// }
// int main(){
//     char ch[]={'r','a','c','e','c','a','r'};
//     int n=sizeof(ch)/sizeof(ch[0]);
//     bool found=pallin(ch,n);
//     if(found){
//         cout<<"It is Pallindrome";
//     }
//     else
//     cout<<"It is not pallindrome";
// }