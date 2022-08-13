// Problem : 339A Helpful maths

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i, j;
    char s[100], temp;
    cin >> s;
    for(i=0; i<(strlen(s)-1); i++){
        for(j=0; j<(strlen(s)-i-1); j++){
            if(s[j]!='+'){
                if(s[j]>s[j+2]){
                    temp=s[j];
                    s[j]=s[j+2];
                    s[j+2]=temp;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}
Footer
