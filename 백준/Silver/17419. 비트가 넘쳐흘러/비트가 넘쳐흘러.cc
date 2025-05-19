#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin>>n>>s;

    int cnt=0;
    for(char c:s) {
        cnt+=(c=='1');
    }
    cout<<cnt;
}