#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;
    vector<string>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]=='-') {
                if(j==0||arr[i][j-1]!='-') {
                    cnt++;
                }
            }else {
                if(i==0||arr[i-1][j]!='|') {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<"\n";
}