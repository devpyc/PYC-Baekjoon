#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int ans=0;
    string ss="ABBDOPQRabdegopq@";
    for(int i=0; i<s.size(); i++) {
        ans+=count(ss.begin(),ss.end(),s[i]);
    }
    cout<<ans;
}