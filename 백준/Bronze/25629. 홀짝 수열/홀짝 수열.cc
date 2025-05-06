#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int odd=0,even=0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2)odd++;
        else even++;
    }
    int a=(n+1)/2,b=n/2;
    cout<<(odd>=a && even>=b);
}