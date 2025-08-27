#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin>>n;
    cout<<(n>=620?"Red":(n>=590?"Orange":(n>=570?"Yellow":(n>=495?"Green":(n>=450?"Blue":(n>=425?"Indigo":"Violet"))))));
}