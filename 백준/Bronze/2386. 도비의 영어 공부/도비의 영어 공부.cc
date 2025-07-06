#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        string s;
        getline(cin,s);
        if (s=="#") {
            break;
        }
        cout<<s[0]<<" "<<count(s.begin(),s.end(),tolower(s[0]))+count(s.begin(),s.end(),toupper(s[0]))-1<<"\n";
    }
}