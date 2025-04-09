#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--) {
        int m;
        cin>>m;

        int cnt=(m+1)/2;
        cout<<cnt<<"\n";

        priority_queue<int>maxh;
        priority_queue<int,vector<int>,greater<int>>minh;

        int num;
        int out=0;

        for(int i=0; i<m; i++) {
            cin>>num;

            if (maxh.empty() || num <= maxh.top()) {
                maxh.push(num);
            } else {
                minh.push(num);
            }

            if (maxh.size() > minh.size() + 1) {
                minh.push(maxh.top());
                maxh.pop();
            } else if (minh.size() > maxh.size()) {
                maxh.push(minh.top());
                minh.pop();
            }

            if(i%2==0) {
                cout<<maxh.top();
                out++;

                if(out%10==0||out==cnt) cout<<"\n";
                else cout<<" ";
            }
        }
    }
}