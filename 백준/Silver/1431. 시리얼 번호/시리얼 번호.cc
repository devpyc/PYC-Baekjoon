#include <bits/stdc++.h>
using namespace std;

int sum(string s) {
    int ans=0;
    for (int i=0; i<s.size(); i++) {
        if (isdigit(s[i])) ans+=s[i]-'0';
    }
    return ans;
}

int comp(string a, string b) {
    if (a.size()!=b.size()) return a.size()<b.size();
    else {
        if (sum(a)!=sum(b)) return sum(a)<sum(b);
        else return a<b;
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<string>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),comp);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
}