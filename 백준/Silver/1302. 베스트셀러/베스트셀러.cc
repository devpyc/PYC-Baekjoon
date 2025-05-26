#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int>arr;
    while(n--) {
        string s;
        cin>>s;
        arr[s]++;
    }
    int max=0;
    string ans;
    for(auto& i:arr) {
        if(i.second>max) {
            max=i.second;
            ans=i.first;
        }
    }
    cout<<ans<<"\n";
}