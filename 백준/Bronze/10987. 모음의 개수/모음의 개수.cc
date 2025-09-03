#include <bits/stdc++.h>
using namespace std;

char arr[5]={'a','e','i','o','u'};

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    string s;
    cin>>s;
    int cnt=0;
    for (int i=0; i<5; i++) {
        cnt+=count(s.begin(),s.end(),arr[i]);
    }
    cout<<cnt;
}