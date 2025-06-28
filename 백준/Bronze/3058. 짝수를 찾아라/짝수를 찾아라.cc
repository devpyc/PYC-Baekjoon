#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        vector<int>arr;
        int ans=0;
        for (int i=0; i<7; i++) {
            int x;
            cin>>x;
            if (x%2==0) {
                arr.push_back(x);
                ans+=x;
            }
        }
        cout<<ans<<" "<<*min_element(arr.begin(),arr.end())<<"\n";
    }
}