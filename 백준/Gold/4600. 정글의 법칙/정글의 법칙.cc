#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,m;

    while(cin>>n>>m){
        if(n==0&&m==0) break;

        int k=-n;
        vector<int>arr1(k),arr2(k);

        for(int i=0;i<k;i++) {
            cin>>arr1[i]>>arr2[i];
        }

        vector<int> list(k+1,0);
        vector<char> cur(k,0);
        list[0]=m;

        priority_queue<tuple<long long,int,int>,vector<tuple<long long,int,int>>,greater<tuple<long long,int,int>>> pq;
        auto res=[&](long long h){
            for(int i=0;i<k;i++){
                if(!cur[i]&&list[i]>0){
                    int g=min(arr1[i],list[i]);
                    list[i]-=g;
                    cur[i]=1;
                    pq.emplace(h+arr2[i],i,g);
                }
            }
        };
        long long ans=0;
        res(0);

        while(list[k]<m){
            long long t=get<0>(pq.top());

            while(!pq.empty()&&get<0>(pq.top())==t){
                auto e=pq.top(); pq.pop();
                int i=get<1>(e), g=get<2>(e);

                cur[i]=0;
                list[i+1]+=g;
            }
            ans=t;
            res(t);
        }
        cout<<ans<<'\n';
    }
}