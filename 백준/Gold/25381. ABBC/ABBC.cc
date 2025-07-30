#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    int n=s.size();

    vector<int>arr;
    arr.reserve(n);
    for(int i=0; i<n; i++){
        if(s[i]=='B') arr.push_back(i);
    }
    int m=arr.size();
    if(m==0){
        cout<<0;
        return 0;
    }

    vector<vector<int>> task(m);
    for(int i=0; i<n; i++){
        if(s[i]=='A'){
            int ub=upper_bound(arr.begin(),arr.end(),i) - arr.begin();
            if(ub<m){
                task[ub].push_back(m-1);
            }
        }
        else if(s[i]=='C'){
            int lb=lower_bound(arr.begin(), arr.end(), i) - arr.begin();
            int r=lb-1;
            if(r>=0){
                task[0].push_back(r);
            }
        }
    }

    priority_queue<int,vector<int>,greater<int>>pq;
    int ans=0;
    for(int t=0; t<m; t++){
        for(int r:task[t]){
            pq.push(r);
        }
        while(!pq.empty()&&pq.top()<t){
            pq.pop();
        }
        if(!pq.empty()){
            pq.pop();
            ans++;
        }
    }
    cout << ans;
}