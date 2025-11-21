#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int k;
    cin>>k;
    stack<int>st;
    while (k--) {
        string s;
        cin>>s;
        if (s=="push") {
            int x;
            cin>>x;
            st.push(x);
        }else if (s=="top") {
            if (st.empty()) cout<<-1<<"\n";
            else cout<<st.top()<<"\n";
        }else if (s=="size") {
            cout<<st.size()<<"\n";
        }else if (s=="empty") {
            cout<<st.empty()<<"\n";
        }else if (s=="pop") {
            if (st.empty()) cout<<-1<<"\n";
            else cout<<st.top()<<"\n",st.pop();
        }
    }
}