#include<iostream>
using namespace std;
int x, k, a, c=0, n[1000];
int main(){
cin >> x >> k;
for(int i=1; i<=x; i++){
    cin>>a;
    n[i] = a;
}
for(int j=1; j<=x; j++)
{
    if(n[j]>=n[k] && n[j]>0)
        c++;
}
cout << c << endl;
}
