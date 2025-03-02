#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define pii pair<int,int>
#define mi map<int,int>
#define qi queue<int>
#define di deque<int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define tiii tuple<int,int,int>
#define MOD 9901
#define endl "\n"
#define io ios_base::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main() {
    io;
    int t;
    cin >> t;
    stack<int>n;
    for(int i=0; i<t; ++i){
        int N;
        cin>>N;
        if(N==0&&!n.empty()){
            n.pop();
        }else{
            n.push(N);
        }
    }
    int s=0;
    while(!n.empty()){
        s+=n.top();
        n.pop();
    }
    cout<<s<<endl;
}