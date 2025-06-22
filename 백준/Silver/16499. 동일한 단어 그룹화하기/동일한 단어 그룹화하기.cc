#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    set<string>arr;
    for (int i=0; i<n; i++) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        arr.insert(s);
    }
    cout<<arr.size();
}