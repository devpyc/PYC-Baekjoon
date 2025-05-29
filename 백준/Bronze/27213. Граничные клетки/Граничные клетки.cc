#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m;
    cin>>n>>m;
    cout<<n*m-(n>1&&m>1?(n-2)*(m-2):0);
}