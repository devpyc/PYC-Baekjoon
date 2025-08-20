#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;

    while (t--) {
        string s;
        cin>>s;
        while (s.size()<4) {
            s="0"+s;
        }

        int cnt=0;

        while (s!="6174") {
            string s1=s,s2=s;
            sort(s1.begin(),s1.end(),greater<int>());
            sort(s2.begin(),s2.end());
            int ans=stoi(s1)-stoi(s2);
            s=to_string(ans);
            while (s.size()<4) {
                s="0"+s;
            }
            cnt++;
            if (ans==0) break;
        }
        cout<<cnt<<"\n";
    }
}