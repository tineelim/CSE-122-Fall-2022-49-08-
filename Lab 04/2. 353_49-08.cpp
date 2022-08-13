// Problem : 281A Word Capitalization

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[200];
    cin >> s;
    if(s[0]>=97 && s[0]<=122){
        s[0]=s[0]-32;
    }
    cout << s << endl;
    return 0;
}
