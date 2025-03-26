#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<int>a(n);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        if(!binary_search(a.begin(),a.end(),x)) {
            cout<<-1<<"\n";
        }else {
            cout<<lower_bound(a.begin(),a.end(),x)-a.begin()<<"\n";
        }
    }
}