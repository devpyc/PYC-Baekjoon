#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;

    string a=s;
    reverse(s.begin(),s.end());
    cout<<(a==s?"true":"false");
}