#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    vector<int>arr;
    while (t--) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<(count(arr.begin(),arr.end(),0)>count(arr.begin(),arr.end(),1)?"Junhee is not cute!":"Junhee is cute!");
}