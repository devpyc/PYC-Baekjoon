#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s;
    int i=1;
    while (1) {
        getline(cin,s);
        if (s=="0") return 0;
        cout<<"Case "<<i<<": Sorting... done!\n";
        i++;
    }
}