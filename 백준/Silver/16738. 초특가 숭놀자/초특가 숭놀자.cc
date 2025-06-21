#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct room {
    int left,right;
    ll object;
    bool check;
};
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,q;
    cin>>n>>q;
    vector<int>arr(n+1,0);
    vector<room>board;
    board.reserve(q+1);
    board.push_back({0,0,0,0});
    int c=0;
    while(q--){
        string o;
        cin>>o;

        if(o=="new"){
            ll x;
            int y;
            cin>>x>>y;

            int t=0,s=-1;
            for(int i=1;i<=n;i++){
                if(!arr[i]&&++t>=y) {
                    s=i-y+1;break;
                }
                if(arr[i]) t=0;
            }
            if(s<0) cout<<"REJECTED\n";
            else{
                ++c;
                for(int i=s;i<s+y;i++) {
                    arr[i]=c;
                }
                board.push_back({s,s+y-1,x,1});
                cout<<s<<" "<<s+y-1<<"\n";
            }
        }else if(o=="in"){
            int a;
            ll b;
            cin>>a>>b;
            board[a].object+=b;
        }else{
            int a;
            ll b;
            cin>>a>>b;
            auto&k=board[a];
            k.object-=b;
            if(!k.object&&k.check){
                for(int i=k.left;i<=k.right;i++) {
                    arr[i]=0;
                }
                k.check=0;
                cout<<"CLEAN "<<k.left<<" "<<k.right<<"\n";
            }
        }
    }
}
