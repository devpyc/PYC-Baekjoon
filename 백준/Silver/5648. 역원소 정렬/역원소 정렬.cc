#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<long long>arr;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        arr.push_back(stoll(s));
    }
    sort(arr.begin(),arr.end());
    for(long long i:arr) {
        cout<<i<<"\n";
    }
}