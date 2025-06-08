#include <bits/stdc++.h>
using namespace std;

string add(const string &a, const string &b) {
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    string res;
    while (i >= 0 || j >= 0 || carry) {
        int x = i >= 0 ? a[i--] - '0' : 0;
        int y = j >= 0 ? b[j--] - '0' : 0;
        int s = x + y + carry;
        res.push_back('0' + (s % 10));
        carry = s / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string mul(const string &a, const string &b) {
    int n = a.size(), m = b.size();
    vector<int> v(n + m);
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            v[i + j + 1] += (a[i] - '0') * (b[j] - '0');
        }
    }
    for (int i = n + m - 1; i > 0; --i) {
        v[i - 1] += v[i] / 10;
        v[i] %= 10;
    }
    string s;
    for (int x : v) if (!(s.empty() && x == 0)) s.push_back('0' + x);
    return s.empty() ? "0" : s;
}

bool comp(const string &a, const string &b) {
    if (a.size() != b.size()) return a.size() > b.size();
    return a > b;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string>arr1(3),arr2(3);
    cin>>arr1[0]>>arr1[1]>>arr1[2];
    cin>>arr2[0]>>arr2[1]>>arr2[2];

    sort(arr1.begin(),arr1.end(),comp);
    sort(arr2.begin(),arr2.end(),comp);

    string ans="0";
    for(int i=0; i<3; i++){
        ans=add(ans,mul(arr1[i], arr2[i]));
    }
    cout<<ans;
}