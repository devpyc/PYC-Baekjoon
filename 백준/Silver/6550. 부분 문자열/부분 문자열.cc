#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    while (cin>>a>>b) {
        size_t i=0,j=0;
        while (i<a.size()&&j<b.size()) {
            if (a[i]==b[j]) ++i;
            ++j;
        }
        cout<<(i==a.size()?"Yes":"No")<<"\n";
    }
}