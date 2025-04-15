#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b) {
    if(a.length()==b.length()) return a<b;
    else return a.length()<b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),cmp);
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    for(auto i:arr) {
        cout<<i<<"\n";
    }
}