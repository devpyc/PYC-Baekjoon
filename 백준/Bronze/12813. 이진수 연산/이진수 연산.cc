#include <bits/stdc++.h>
using namespace std;

string AND(string a,string b) {
    string ans="";
    for (int i=0; i<a.size(); i++) {
        if (a[i]=='1'&&b[i]=='1') ans+='1';
        else ans+='0';
    }
    return ans;
}

string OR(string a,string b) {
    string ans="";
    for (int i=0; i<a.size(); i++) {
        if (a[i]=='1'||b[i]=='1') ans+='1';
        else ans+='0';
    }
    return ans;
}

string XOR(string a,string b) {
    string ans="";
    for (int i=0; i<a.size(); i++) {
        if (a[i]!=b[i]) ans+='1';
        else ans+='0';
    }
    return ans;
}

string NOT(string a) {
    string ans="";
    for (int i=0; i<a.size(); i++) {
        if (a[i]=='0') ans+='1';
        else ans+='0';
    }
    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a,b;
    cin>>a>>b;

    cout<<AND(a,b)<<"\n"<<OR(a,b)<<"\n"<<XOR(a,b)<<"\n"<<NOT(a)<<"\n"<<NOT(b);
}