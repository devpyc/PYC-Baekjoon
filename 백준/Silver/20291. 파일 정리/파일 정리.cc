#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int>arr;
    while(n--) {
        string s;
        cin>>s;
        s=s.substr(s.find('.')+1);
        arr[s]++;
    }
    int max=0;
    string ans;
    for(auto it=arr.begin(); it!=arr.end(); it++) {
        cout<<it->first<<" "<<it->second<<"\n";
    }
}