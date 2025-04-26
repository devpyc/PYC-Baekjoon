#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,w,h,l;
    cin>>n>>w>>h>>l;
    n<(w/l)*(h/l)?cout<<n:cout<<(w/l)*(h/l);
}