#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    unordered_map<string,int>arr;
    for(int i=0; i<n; i++) {
        int a,b;
        cin>>a>>b;

        for(int j=0; j<b; j++) {
            string s;
            cin>>s;
            arr[s]++;
        }
    }

    int MAX=0;
    for(const auto& i:arr) {
        if(i.second>MAX) MAX=i.second;
    }

    int cnt=0;
    string ans;
    for(const auto &i:arr) {
        if(i.second==MAX) {
            cnt++;
            if(cnt>1) {
                cout<<-1;
                return 0;
            }
            ans=i.first;
        }
    }
    (cnt==1)?cout<<ans:cout<<-1;
}