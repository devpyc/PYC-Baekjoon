#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>arr(30,0);
    for(int i=0; i<28; i++) {
        int x;
        cin>>x;
        arr[x-1]++;
    }
    for(int i=0; i<30; i++) {
        if(arr[i]==0) {
            cout<<i+1<<"\n";
        }
    }
}