// #include<iostream>
// using namespace std;
// int main(){
//     char str[20]="Karan Tripathi";
//     int count =0;
//     for(int i=0;str[i]!=0;i++)
//     {
//         count++;
//     }
//     cout<<"Length Of a String is:"<<count;
// }
                      //OR
//using delemeter
#include<iostream>
using namespace std;
int length(char ch[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(ch[i]=='\0'){
            break;
        }
        else{
            ans++;
        }
    }
    return ans;
}
int main(){
    char ch[100];
    cin.getline(ch,99);
    int n=sizeof(ch)/sizeof(ch[0]);
    int ans=length(ch,n);
    cout<<ans;
}
                       //or
//we can also use strlen function