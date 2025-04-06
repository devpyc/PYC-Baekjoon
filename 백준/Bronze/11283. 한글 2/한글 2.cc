#include <bits/stdc++.h>
#include <codecvt>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    wstring_convert<codecvt_utf8<wchar_t>>cnv;
    string s;
    cin>>s;

    wstring wc=cnv.from_bytes(s);
    wchar_t res=wc[0];
    int ans=res-0xAC00+1;
    cout<<ans<<"\n";
}