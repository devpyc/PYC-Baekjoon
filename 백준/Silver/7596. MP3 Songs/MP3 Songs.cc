#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt=1;

    while(true) {
        int n;
        cin>>n;
        if(n==0) return 0;
        cin.ignore();
        vector<string>arr(n);
        for(int i=0; i<n; i++) {
            getline(cin,arr[i]);
        }
        sort(arr.begin(),arr.end());

        cout<<cnt<<"\n";
        for(auto i:arr) {
            cout<<i<<"\n";
        }
        cnt++;
    }
}