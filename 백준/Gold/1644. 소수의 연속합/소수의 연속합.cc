#include <bits/stdc++.h>
using namespace std;

bool check[10001];

bool prime(int n) {
    if (n<2) return false;
    for (int i=2; i*i<=n; i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<int>arr;
    for (int i=2; i<=n; i++) {
        if (prime(i)) arr.push_back(i);
    }

    int l=0,r=0,cnt=0,sum=0;
    while (true) {
        if (sum>=n) {
            sum-=arr[l++];
        } else if (r==arr.size()) {
            break;
        } else {
            sum+=arr[r++];
        }

        if (sum==n) {
            cnt++;
        }
    }
    cout<<cnt;
}