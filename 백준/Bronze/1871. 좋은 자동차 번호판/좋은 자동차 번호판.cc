#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        string a=s.substr(0,3),b=s.substr(4,4);

        int ans=0;
        for (int i=0; i<3; i++) {
            ans=ans*26+(a[i]-'A');
        }
        int res=stoi(b);
        cout<<(abs(ans-res)<=100?"nice\n":"not nice\n");
    }
}