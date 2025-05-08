#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    unordered_map<int,string>res;
    unordered_map<string,int>arr;
    for(int i=1; i<=n; i++) {
        string s;
        cin>>s;
        res[i]=s;
        arr[s]=i;
    }

    for(int i=0; i<m; i++) {
        string s;
        cin>>s;
        bool check=true;
        for(char c:s) {
            if(!isdigit(c)) {
                check=false;
                break;
            }
        }
        (check)?cout<<res[stoi(s)]<<"\n":cout<<arr[s]<<"\n";
    }
}