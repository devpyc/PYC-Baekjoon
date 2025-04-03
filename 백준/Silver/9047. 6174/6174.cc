#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    string s=to_string(n);
    while(s.length()<4) {
        s="0"+s;
    }

    string asc=s;
    string desc=s;
    sort(asc.begin(),asc.end());
    sort(desc.begin(),desc.end(),greater<int>());

    int a=stoi(asc),b=stoi(desc);
    return b-a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        
        int cnt=0;
        while(n!=6174) {
            n=solve(n);
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}