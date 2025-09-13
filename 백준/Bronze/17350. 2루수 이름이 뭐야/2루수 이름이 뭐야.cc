#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    bool check=false;
    while (t--) {
        string s;
        cin>>s;
        if (s=="anj") check=true;
    }
    cout<<(check?"뭐야;":"뭐야?");
}