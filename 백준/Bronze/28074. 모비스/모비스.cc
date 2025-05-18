#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char c[5]={'M','O','B','I','S'};
    string s;
    cin>>s;
    for(int i=0; i<5; i++) {
        if(find(s.begin(),s.end(),c[i])==s.end()) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}