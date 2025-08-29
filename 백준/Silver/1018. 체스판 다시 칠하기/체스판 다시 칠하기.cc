#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    vector<string>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    vector<vector<int>>sum(n+1,vector<int>(m+1,0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            char check=((i+j)%2==0)?'W':'B';
            int res=(arr[i][j]!=check);
            sum[i+1][j+1]=sum[i+1][j]+sum[i][j+1]-sum[i][j]+res;
        }
    }

    int ans=64;
    for (int i=0; i+7<n; i++) {
        for (int j=0; j+7<m; j++) {
            int ch=sum[i+8][j+8]-sum[i][j+8]-sum[i+8][j]+sum[i][j];
            ans=min(ans,min(ch,64-ch));
        }
    }
    cout<<ans;
}