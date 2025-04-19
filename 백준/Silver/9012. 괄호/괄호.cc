#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct cmp {
    bool operator()(int a, int b) {
        if(abs(a)==abs(b)) return a>b;
        return abs(a)>abs(b);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        stack<char>st;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++) {
            if(st.empty()) st.push(s[i]);
            else {
                if(st.top()=='('&&s[i]==')') st.pop();
                else st.push(s[i]);
            }
        }
        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}