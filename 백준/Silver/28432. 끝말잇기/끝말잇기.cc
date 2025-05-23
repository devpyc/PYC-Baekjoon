#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    vector<string>arr(n);
    int idx=-1;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]=="?") {
            idx=i;
        }
    }
    int m;
    cin>>m;
    vector<string>res(m);
    for(int i=0; i<m; i++) {
        cin>>res[i];
    }
    for(const auto& i:res) {
        arr[idx]=i;
        unordered_set<string>cur;
        bool check=true;
        for(const auto& j:arr) {
            if(cur.count(j)) {
                check=false;
                break;
            }
            cur.insert(j);
        }
        if(!check) continue;

        for(int i=0; i<n-1; i++) {
            if(arr[i].back()!=arr[i+1].front()) {
                check=false;
                break;
            }
        }
        if(check) {
            cout<<i<<"\n";
            return 0;
        }
    }
}