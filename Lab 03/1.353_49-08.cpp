// Problem 282A Bit++

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int n, i=0, x=0; char s[20];
    cin>>n;
    while(n--)
    {
        cin>>s;
        while(s[i]!='\0')
        {
            if(s[i]=='+'){x++; break;}
            else if(s[i]=='-'){x--; break;}
            i++;
        }
    }
    cout<<x<<endl;
    return 0;
}
