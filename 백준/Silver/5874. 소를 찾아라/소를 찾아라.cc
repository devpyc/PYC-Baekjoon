#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    int n=s.length();
    vector<int>arr1,arr2;

    for(int i=0; i<n-1; i++) {
        if(s[i]=='('&&s[i+1]=='(') {
            arr1.push_back(i);
        }
    }

    for(int i=0; i<n-1; i++) {
        if(s[i]==')'&&s[i+1]==')') {
            arr2.push_back(i);
        }
    }

    long long cnt=0;

    for (int i:arr1) {
        for (int j:arr2) {
            if (i<j) cnt++;
        }
    }
    cout<<cnt;
}