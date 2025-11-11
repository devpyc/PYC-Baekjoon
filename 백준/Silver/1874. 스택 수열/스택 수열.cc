#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,x=2;
    cin>>n;
    stack<int>st;
    string ans="+";
    st.push(1);
    for (int i=0; i<n; i++) {
        int num;
        cin>>num;
        while (st.empty()||st.top()<num) {
            ans+="+";
            st.push(x);
            x++;
        }
        if (st.top()==num) {
            ans+="-";
            st.pop();
        }else {
            ans="NO";
            cout<<ans<<"\n";
            return 0;
        }
    }
    for (char c:ans) {
        cout<<c<<"\n";
    }
}