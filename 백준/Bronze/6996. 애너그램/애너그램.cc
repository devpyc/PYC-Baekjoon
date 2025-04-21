#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    while(n--) {
        string a,b;
        cin>>a>>b;
        string a1=a,b1=b;
        sort(a1.begin(),a1.end());
        sort(b1.begin(),b1.end());
        if(a1==b1) cout<<a<<" & "<<b<<" are anagrams.\n";
        else cout<<a<<" & "<<b<<" are NOT anagrams.\n";
    }
}