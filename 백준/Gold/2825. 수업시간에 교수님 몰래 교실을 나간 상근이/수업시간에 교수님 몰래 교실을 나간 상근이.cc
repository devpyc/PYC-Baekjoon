#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    unordered_map<string,unsigned long long>arr;
    arr.reserve(1200);

    for (int i=0; i<n; i++) {
        unsigned long long x;
        cin>>x;

        string s(10,'0');
        while (x>0) {
            int j=x%10;
            s[j]='1';
            x/=10;
        }
        arr[s]++;
    }

    vector<string>k;
    vector<unsigned long long>cnt;
    k.reserve(arr.size());
    cnt.reserve(arr.size());

    for (auto &i:arr) {
        k.push_back(i.first);
        cnt.push_back(i.second);
    }

    const int p=(int)k.size();
    unsigned long long sum=(unsigned long long)n*(unsigned long long)(n-1)/2;

    auto check=[&](const string& a,const string& b)->bool {
        for (int i=0; i<10; ++i) {
            if (a[i]=='1'&&b[i]=='1') return false;
        }
        return true;
    };

    unsigned long long res=0;
    for (int i=0; i<p; ++i) if (cnt[i]) {
        for (int j=i+1; j<p; ++j) {
            if (cnt[j]) {
                if (check(k[i],k[j])) {
                    res+=cnt[i]*cnt[j];
                }
            }
        }
    }
    unsigned long long ans=sum-res;
    cout<<ans<<'\n';
}