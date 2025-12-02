#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s="SciComLove";
    if (n%2==1) reverse(s.begin(),s.end());
    cout<<s;
}