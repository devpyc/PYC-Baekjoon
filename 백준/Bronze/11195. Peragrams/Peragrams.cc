#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    vector<int>freq(26,0);
    for(char c:s) {
        freq[c-'a']++;
    }

    int cnt=0;
    for(int i:freq) {
        if(i%2!=0) {
            cnt++;
        }
    }
    
    int ans=(cnt>0)?cnt-1:0;
    cout<<ans<<"\n";
}