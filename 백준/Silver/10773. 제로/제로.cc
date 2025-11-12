#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int k;
    cin>>k;

    stack<int>st;
    while (k--) {
        int x;
        cin>>x;
        if (x!=0) st.push(x);
        else st.pop();
    }
    int sum=0;

    while (!st.empty()) {
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
}