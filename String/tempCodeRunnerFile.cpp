#include<bits/stdc++.h>
// using namespace std;
// bool pallin(char ch[],int n){
//     int i=0;
//     int j=n-1;
//     int count=0;
//     while(i<=j){
//         if(ch[i]==ch[j]){
//             count++;
//             i++;
//             j--;
//         }
//     }
//         if(count==n/2){
//             return 1;
//         }
//         else{
//         return 0;
//         }
// }
// int length(char ch[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(ch[i]=='\0'){
//             break;
//     }
//     else{
//         count++;
//     }
// }
//  return count;
// }

// int main(){
//     char ch[100];
//     cin.getline(ch,99);
//     int n=sizeof(ch)/sizeof(ch[0]);
//     int ans=length(ch,n);
//     cout<<ans<<endl;
//     bool found=pallin(ch,ans);
//     if(found){
//         cout<<"It is Pallindrome";
//     }
//     else
//     cout<<"It is not pallindrome";
// }