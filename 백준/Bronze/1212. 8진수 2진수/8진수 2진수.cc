#include <bits/stdc++.h>
using namespace std;

string solve(string a) {
    string ans="";
    for(char c:a) {
        int d=c-'0';
        string res="";
        for(int i=0; i<3; i++) {
            res=to_string(d%2)+res;
            d/=2;
        }
        ans+=res;
    }
    ans.erase(0,ans.find_first_not_of('0'));
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    if (s=="0") {
        cout<<"0";
    } else {
        cout<<solve(s);
    }
}