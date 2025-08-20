#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    vector<string>arr;
    for (int i=0; i<s.size(); i++) {
        arr.push_back(s.substr(i,s.size()));
    }
    sort(arr.begin(),arr.end());
    for (string i:arr) {
        cout<<i<<"\n";
    }
}