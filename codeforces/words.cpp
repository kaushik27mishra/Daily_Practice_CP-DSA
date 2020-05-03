#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout<<#x<<" "<<x<<endl;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define N 101
#define ll long long
#define endl "\n"
#define mod 1000000007
#define pb push_back
#define F first
#define S second

int main() {
    string raw;
    cin>>raw;
    int countSmall(0),countLarge(0);
    fo(i,raw.size()) {
        int a = (int)raw[i];
        if(a>=97 && a<=122) {
            countSmall++;
        }
        else {
            countLarge++;
        }
    }

    if(countSmall>=countLarge) {
        fo(i,raw.size()) {
            int a = (int)raw[i];
            if(a>=65 && a<=90) {
                char c = (char)(a+32);
                raw[i]=c;
            }
        }
    }
    else {
        fo(i,raw.size()) {
            int a = (int)raw[i];
            if(a>=97 && a<=122) {
                char c = (char)(a-32);
                raw[i]=c;
            }
        }

    }

    cout<<raw<<endl;
    return 0;
}

// Alternate Solution

// #include <iostream>
// #include <cstring>
// using namespace std;
// 
// int main() {
	// string s;
	// cin>>s;
	// int countup=0,countlow=0;
	// for(int i=0;i<s.size();i++){
	    // if(isupper(s[i])){
	        // countup++;
	    // }else{
	        // countlow++;
	    // }
	// }
	// if(countup>countlow){
	    // char ch;
	    // for(int i=0;i<s.size();i++){
	        // ch=toupper(s[i]);
	        // cout<<ch;
	    // }
	// }else{
	    // char ch;
	    // for(int i=0;i<s.size();i++){
	        // ch=tolower(s[i]);
	        // cout<<ch;
	    // }
	// }
	// return 0;
// }