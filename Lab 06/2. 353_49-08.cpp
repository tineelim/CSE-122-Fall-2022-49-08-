// Problem 59A	Word
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin>>s;
	int countup=0,countlow=0;

    for(int i=0;s[i]!='\0';++i){
        if(s[i]>='A' && s[i]<='Z')
        countup++;
        else countlow++;
    }

	if(countup>countlow){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
