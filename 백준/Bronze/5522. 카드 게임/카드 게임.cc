#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int sum=0;
    int n=5;
    while (n--) {
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum;
}