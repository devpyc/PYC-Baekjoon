#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        bitset<32>bit(x);
        vector<int>arr;

        for (int i=0; i<bit.size(); ++i) {
            if (bit[i]==1) arr.push_back(i);
        }
        for (int i:arr) {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}