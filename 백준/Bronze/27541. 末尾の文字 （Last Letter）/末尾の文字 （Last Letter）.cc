#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin>>n>>s;
    if(s[n-1]=='G') {
        s.pop_back();
    }else {
        s.push_back('G');
    }
    cout<<s;
}