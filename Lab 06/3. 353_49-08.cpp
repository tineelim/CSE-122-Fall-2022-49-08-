// 977A	Wrong Subtraction
#include <iostream>

using namespace std;

int main()
{
   int n;
    int k;
    cin>>n;
    cin>>k;
    for(int i=0;i<k;i++){
        if(n%10==0){
            n/=10;
            continue;
        }
        n--;
    }
    cout<<n;
}
