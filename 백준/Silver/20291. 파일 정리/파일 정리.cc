#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    map<string,int>arr;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        int m=s.find_first_of('.');
        string cur=s.substr(m+1);
        arr[cur]++;
    }
    for(auto& ans:arr) {
        cout<<ans.first<<" "<<ans.second<<"\n";
    }
}