#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int a=0,b=0;
    for(int i=0; i<3; i++) {
        int x;
        cin>>x;
        if(x==1)a++;
        else b++;
    }
    (a>=b)?cout<<1:cout<<2;
}