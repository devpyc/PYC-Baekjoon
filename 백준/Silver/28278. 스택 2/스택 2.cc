#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    stack<int>st;
    while (t--) {
        int n;
        cin>>n;
        if (n==1) {
            int x;
            cin>>x;
            st.push(x);
        }else if (n==2) {
            if (!st.empty()) {
                cout<<st.top()<<"\n";
                st.pop();
            }else {
                cout<<-1<<"\n";
            }
        }else if (n==3) {
            cout<<st.size()<<"\n";
        }else if (n==4) {
            cout<<st.empty()<<"\n";
        }else {
            if (!st.empty()) {
                cout<<st.top()<<"\n";
            }else {
                cout<<-1<<"\n";
            }
        }
    }
}