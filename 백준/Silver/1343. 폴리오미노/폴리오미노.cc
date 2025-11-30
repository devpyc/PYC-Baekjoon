#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    for (int i=0; i<s.size();) {
        if (s[i]=='X') {
            if (i+3<s.size()&&s.substr(i,4)=="XXXX") {
                s.replace(i,4,"AAAA");
                i+=4;
            } else if (i+1<s.size()&&s.substr(i,2)=="XX") {
                s.replace(i,2,"BB");
                i+=2;
            } else {
                cout<<-1;
                return 0;
            }
        } else i++;
    }
    cout<<s;
}