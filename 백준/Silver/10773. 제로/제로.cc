#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    stack<int>st;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x==0) {
            st.pop();
        }else {
            st.push(x);
        }
    }
    int ans=0;
    while(!st.empty()) {
        ans+=st.top();
        st.pop();
    }
    cout<<ans;
}