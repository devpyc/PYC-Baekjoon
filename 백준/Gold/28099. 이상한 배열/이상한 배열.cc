#include <bits/stdc++.h>
#define X first
#define Y second
#define INF 1000000000
using namespace std;

pair<int,int>init(int node, int start, int end, const vector<int>& arr, vector<pair<int,int>>& tree) {
    if (start==end) {
        return tree[node]={arr[start],arr[start]};
    }
    int mid=(start+end)/2;
    auto L=init(node*2,start,mid,arr,tree);
    auto R=init(node*2+1,mid+1,end,arr,tree);
    return tree[node]={min(L.X,R.X),max(L.Y,R.Y)};
}

pair<int,int> query(int node, int start, int end, int l, int r, const vector<pair<int,int>>& tree) {
    if (r<start||end<l) return {INF,-INF};
    if (l<=start&&end<=r) return tree[node];
    int mid=(start+end)/2;
    auto L=query(node*2,start,mid,l,r,tree);
    auto R=query(node*2+1,mid+1,end,l,r,tree);
    return {min(L.X,R.X), max(L.Y,R.Y)};
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        int N; 
        cin>>N;
        vector<int>arr(N);
        for (int i=0; i<N; ++i){
            cin >> arr[i];
        }

        vector<vector<int>>pos(N+1);
        for (int i=0; i<N; ++i){
            pos[arr[i]].push_back(i);
        }

        vector<pair<int,int>>tree(4*max(1,N));
        init(1,0,N-1,arr,tree);

        bool check=true;

        for (int v=1; v<=N&&check; ++v) {
            auto &p = pos[v];
            for (int i=0; i+1<(int)p.size(); ++i) {
                int l=p[i],r=p[i+1];
                auto it=query(1,0,N-1,l,r,tree);
                if (it.Y!=v) {
                    check=false;
                    break;
                }
            }
        }
        cout<<(check?"Yes\n":"No\n");
    }
}