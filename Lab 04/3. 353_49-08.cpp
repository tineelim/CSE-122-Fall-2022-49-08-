// Problem : 236A Boy or girl
#include <iostream>
using namespace std;
string a;
int p = 1, num;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                num++;
            }
        }
        if (num == 0) {
            p++;
        }
        num = 0;
    }
    if (p % 2 == 0) {
        cout << "IGNORE HIM!";
    } else {
        cout << "CHAT WITH HER!";
    }
}
