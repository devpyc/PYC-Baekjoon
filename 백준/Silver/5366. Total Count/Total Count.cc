#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string,int>arr;
    vector<string>res;

    while(1) {
        string s;
        getline(cin,s);
        if(s=="0") break;
        if(arr[s]==0) res.push_back(s);
        arr[s]++;
    }
    int ans=0;
    for(string& i:res) {
        cout<<i<<": "<<arr[i]<<"\n";
        ans+=arr[i];
    }
    cout<<"Grand Total: "<<ans<<"\n";
}