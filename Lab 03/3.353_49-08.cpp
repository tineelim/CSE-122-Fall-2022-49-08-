// Problem 112A - Petya and Strings
#include <iostream>
#include<string.h>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        }

    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
    return 0;
}
