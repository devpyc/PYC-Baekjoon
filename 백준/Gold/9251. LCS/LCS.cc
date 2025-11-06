#include <bits/stdc++.h>
using namespace std;

int lcs(string& a, string& b) {
    vector<int>dp(b.size()+1);
    for (char x:a) {
        int res=0;
        for (int j=0; j<b.size(); j++) {
            int tmp=dp[j+1];
            dp[j+1]=x==b[j]?res+1:max(dp[j+1],dp[j]);
            res=tmp;
        }
    }
    return dp.back();
}

int main() {
    string a,b;
    cin>>a>>b;
    cout<<lcs(a,b);
}