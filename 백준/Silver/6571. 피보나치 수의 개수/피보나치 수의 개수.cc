#include <bits/stdc++.h>
using namespace std;

string addBigInteger(const string &a, const string &b) {
    int i = a.size() - 1, j = b.size() - 1;
    int carry = 0;
    string res;
    while(i >= 0 || j >= 0 || carry) {
        int x = (i >= 0 ? a[i] - '0' : 0);
        int y = (j >= 0 ? b[j] - '0' : 0);
        int sum = x + y + carry;
        carry = sum / 10;
        res.push_back(char('0' + sum % 10));
        i--; j--;
    }
    reverse(res.begin(), res.end());
    return res;
}

int compareBigInteger(const string &a, const string &b) {
    if(a.size() != b.size()) return (a.size() < b.size() ? -1 : 1);
    if(a == b) return 0;
    return (a < b ? -1 : 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> fib;
    fib.push_back("1");
    fib.push_back("2");

    string limit = "1" + string(100, '0');

    while(true) {
        string next = addBigInteger(fib[fib.size()-1], fib[fib.size()-2]);
        if(compareBigInteger(next, limit) > 0) break;
        fib.push_back(next);
    }

    string a, b;
    
    while(cin >> a >> b) {
        if(a == "0" && b == "0") break;
        int cnt = 0;

        for (int i = 0; i < fib.size(); i++) {
            if(compareBigInteger(fib[i], a) >= 0 && compareBigInteger(fib[i], b) <= 0)
                cnt++;
        }
        cout << cnt << "\n";
    }
}