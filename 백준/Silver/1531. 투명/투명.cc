#include <bits/stdc++.h>
using namespace std;

int arr[101][101];

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1; j<=x2; j++) {
            for(int k=y1; k<=y2; k++) {
                arr[j][k]++;
            }
        }
    }
    int cnt=0;
    for(int i=1; i<=100; i++) {
        for(int j=1; j<=100; j++) {
            if(arr[i][j]>m) cnt++;
        }
    }
    cout<<cnt;
}