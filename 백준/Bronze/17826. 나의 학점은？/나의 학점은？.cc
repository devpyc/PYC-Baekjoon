#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int>arr;
    for (int i=0; i<50; i++) {
        int n;
        cin>>n;
        arr.push_back(n);
    }
    int x;
    cin>>x;
    int ans=find(arr.begin(),arr.end(),x)-arr.begin()+1;
    if (ans<6) cout<<"A+";
    else if (ans<16) cout<<"A0";
    else if (ans<31) cout<<"B+";
    else if (ans<36) cout<<"B0";
    else if (ans<46) cout<<"C+";
    else if (ans<49) cout<<"C0";
    else cout<<"F";
}