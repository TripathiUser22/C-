   #include<iostream>
   using namespace std;
   int main(){
    int a[50],n,i;
    cout<<"Enter the number:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(i%2!=0){
            a[i]=a[i]*2;
        }
        else{
            a[i]=a[i]+10;
        }
        cout<<a[i]<<endl;
    }
    return 0;
   }