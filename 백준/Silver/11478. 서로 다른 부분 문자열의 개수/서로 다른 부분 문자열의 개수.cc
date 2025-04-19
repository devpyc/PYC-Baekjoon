#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    set<string>arr;
    for(int i=0; i<s.length(); i++) {
        for(int j=i+1; j<=s.length(); j++) {
            string ss=s.substr(i,j-i);
            arr.insert(ss);
        }
    }
    cout<<arr.size();
}