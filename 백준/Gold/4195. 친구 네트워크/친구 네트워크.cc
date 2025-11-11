#include <bits/stdc++.h>
using namespace std;

vector<int>parent,S;

int find(int x) {
    return parent[x]==x?x:parent[x]=find(parent[x]);
}

int unite(int a, int b) {
    a=find(a);
    b=find(b);
    if (a!=b) {
        parent[b]=a;
        S[a]+=S[b];
    }
    return S[a];
}

bool same(int a, int b) {
    return find(a)==find(b);
}



int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;

        parent.clear();
        S.clear();
        unordered_map<string,int>num;
        int idx=0;

        for (int i=0; i<x; i++) {
            string a,b;
            cin>>a>>b;

            if (num.find(a)==num.end()) {
                num[a]=idx++;
                parent.push_back(num[a]);
                S.push_back(1);
            }
            if (num.find(b)==num.end()) {
                num[b]=idx++;
                parent.push_back(num[b]);
                S.push_back(1);
            }

            cout<<unite(num[a],num[b])<<"\n";
        }
    }
}