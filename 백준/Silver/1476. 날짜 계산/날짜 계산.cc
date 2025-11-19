#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int e,s,m;
    cin>>e>>s>>m;
    int a=1;
    while (true) {
        if ((a-1)%15+1==e&&(a-1)%28+1==s&&(a-1)%19+1==m) {
            cout<<a<<"\n";
            break;
        }
        a++;
    }
}