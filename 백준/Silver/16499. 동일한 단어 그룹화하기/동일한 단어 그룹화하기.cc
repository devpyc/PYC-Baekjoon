#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int>arr;
    while(n--) {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        arr[s]++;
    }
    int cnt=0;
    for(auto& i:arr) {
        if(i.second>=1) cnt++;
    }
    cout<<cnt;
}