#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}