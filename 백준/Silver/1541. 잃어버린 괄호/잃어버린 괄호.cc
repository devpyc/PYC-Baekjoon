#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    int n,s,m=0;

    for(scanf("%d",&s);scanf("%c",&c),c!=10;) {
        if(c=='-')m=1;
        scanf("%d",&n);
        if(m)s-=n;
        else s+=n;
    }
    printf("%d",s);
}