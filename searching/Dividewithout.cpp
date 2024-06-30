#include<bits/stdc++.h>
using namespace std;
int getans(int divident,int divisor){
    int s=-divident;
    int e=divident;
    int mid=s+((e-s)>>1);
    int ans=-1;
    while(s<=e){
        if((divisor*mid)==divident){
            return mid;
        }
        if((divisor*mid)<divident){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)>>1);
    }
    return ans;
}
int main(){
    int divident=9;
    int divisor=5;
    int ans=getans(divident,divisor);
    cout<<"Final ans is "<<ans;

}