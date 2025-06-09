#include <bits/stdc++.h>
using namespace std;

vector<int> kmp(string s) {
    int m=s.length();
    vector<int>arr(m);
    arr[0]=0;

    int j = 0;
    for(int i=1; i<m; i++) {
        while (j>0&&s[i]!=s[j]) {
            j=arr[j-1];
        }

        if (s[i]==s[j]) j++;
        arr[i]=j;
    }

    return arr;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int l;
    string s;

    cin>>l>>s;

    vector<int>arr=kmp(s);
    cout<<l-arr[l-1];
}