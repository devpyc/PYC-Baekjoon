#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    cin.ignore();

    for(int i=0; i<n; i++) {
        string s;
        getline(cin,s);

        if(s.empty()) {
            continue;
        }

        char cur=s[0];
        int cnt=1;

        for(size_t j=1; j<s.length(); j++) {
            if(s[j]==cur) {
                cnt++;
            }else {
                cout<<cnt<<" "<<cur;
                cur=s[j];
                cnt=1;
                cout<<" ";
            }
        }
        cout<<cnt<<" "<<cur<<"\n";
    }
}