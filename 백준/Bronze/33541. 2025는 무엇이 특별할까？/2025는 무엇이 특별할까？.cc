#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin>>x;
    for(int i=x+1; i<9999; i++) {
        int a,b;
        a=i/100;
        b=i%100;
        if(pow(a+b,2)==i) {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}