#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a[6][6],i,j,moves;
    for(i=1; i<6; i++)
    {
        for(j=1; j<6; j++)
        {
            cin>>a[i][j];

            if(a[i][j]==1)
            {
                moves = abs(i-3) + abs(j-3);
            }
        }
    }
    cout<<moves<<endl;

    return 0;
}
