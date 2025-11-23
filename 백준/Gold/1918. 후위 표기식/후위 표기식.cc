#include <bits/stdc++.h>
using namespace std;

int solve(char c) {
    if (c=='(') return 0;
    if (c=='+'||c=='-') return 1;
    if (c=='*'||c=='/') return 2;
    return -1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    stack<char>st;

    for (char c:s) {
        if (isalpha(c)) {
            cout<<c;
        }
        else if (c=='(') st.push(c);
        else if (c==')') {
            while (st.top()!='(') {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }else {
            while (!st.empty()&&solve(st.top())>=solve(c)) {
                cout<<st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        cout<<st.top();
        st.pop();
    }
}