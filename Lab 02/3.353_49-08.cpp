// Problem 50A - Domino piling
#include<iostream>
using namespace std;
int main(){

    int m,n,s;
    cin>> m>> n;
    if(m>=1 && m<=n && n<=16)
    {
        s=(m*n)/2;
    }
    cout<<s<<endl;

}
