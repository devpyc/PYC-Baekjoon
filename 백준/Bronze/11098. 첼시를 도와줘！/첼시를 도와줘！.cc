#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    while(n--) {
        int p;
        cin>>p;

        vector<pair<int,string>>arr;

        for(int i=0; i<p; i++) {
            int x;
            string s;
            cin>>x>>s;
            arr.push_back({x,s});
        }
        sort(arr.begin(),arr.end());
        cout<<arr[arr.size()-1].second<<"\n";
    }

}