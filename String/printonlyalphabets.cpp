#include<iostream>
using namespace std;
int main()
{
    char ch[50]="K2a3r566-+a+3.21n t8ri5*pa7*th21*/i/*/*";
    for(int i=0;ch[i]!=0;i++){
        if(ch[i]>='A'&&ch[i]<='Z'||ch[i]>='a'&&ch[i]<='z')
        {
            cout<<ch[i];
        }

    }
    }