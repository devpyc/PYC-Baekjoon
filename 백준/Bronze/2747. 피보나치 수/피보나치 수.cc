#include <bits/stdc++.h>
using namespace std;

int d[45] = { 0, };

int fibo(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else if (d[n] != 0) return d[n];
    d[n] = fibo(n - 1) + fibo(n - 2);
    return d[n];
}
int main(){
    int n;
    int ans;
    cin >> n;
    ans = fibo(n);
    cout << ans << '\n';
}