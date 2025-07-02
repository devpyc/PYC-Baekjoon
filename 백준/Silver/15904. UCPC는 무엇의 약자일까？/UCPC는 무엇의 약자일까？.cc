#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    getline(cin,s);
    string a="UCPC";
    int r=0;
    for (int i=0; i<s.size(); ++i) {
        if (s[i]==a[r]) {
            r++;
        }
    }
    (r==4)?cout<<"I love UCPC":cout<<"I hate UCPC";
}