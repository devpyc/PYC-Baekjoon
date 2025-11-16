#include <bits/stdc++.h>
using namespace std;int main(){cin.tie(0)->sync_with_stdio(0);int n;cin>>n;int a[n];for(int i=0;i<n;i++){cin>>a[i];}sort(a,a+n);for(int i:a){cout<<i<<"\n";}}