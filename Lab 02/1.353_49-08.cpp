#include<iostream>

using namespace std;
int main(){
int n, P, V, T, c=0;

cin>>n;

while(n--) {

    cin >> P >> V >> T;

    if(P + V + T >= 2)
    {
        c+=1;
    }
}
cout << c << endl;
}
Footer
