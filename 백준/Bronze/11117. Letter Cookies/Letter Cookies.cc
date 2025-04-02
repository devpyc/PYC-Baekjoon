#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;

        unordered_map<char,int>umap;
        for(char c:s) {
            umap[c]++;
        }
        int m;
        cin>>m;

        for(int i=0; i<m; i++) {
            string ss;
            cin>>ss;

            unordered_map<char,int>word;
            for(char c:ss) {
                word[c]++;
            }

            bool check=true;
            for(const auto& pair:word) {
                char let=pair.first;
                int cnt=pair.second;

                if(umap.find(let)==umap.end()||umap[let]<cnt) {
                    check=false;
                    break;
                }
            }
            cout<<(check?"YES\n":"NO\n");
        }
    }
}