#include <bits/stdc++.h>
using namespace std;

string sub(string a, string b) {
    string result;
    int borrow = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while(i >= 0 || j >= 0) {
        int diff = (i >= 0 ? a[i--] - '0' : 0) - (j >= 0 ? b[j--] - '0' : 0) - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else borrow = 0;
        result += char('0' + diff);
    }

    while (result.size() > 1 && result.back() == '0')
        result.pop_back();

    reverse(result.begin(), result.end());
    return result;
}

string divide(string dividend, string divisor) {
    if (divisor == "0") throw invalid_argument("Division by zero");

    string quotient;
    string current;

    for (size_t i = 0; i < dividend.size(); ++i) {
        current += dividend[i];
        int x = 0;
        while (current.size() > 1 && current[0] == '0') {
            current.erase(0, 1);
        }
        while (current.size() > divisor.size() || (current.size() == divisor.size() && current >= divisor)) {
            current = sub(current, divisor);
            x++;
        }
        quotient += to_string(x);
    }

    size_t startpos = quotient.find_first_not_of("0");
    if (string::npos != startpos) {
        return quotient.substr(startpos);
    }
    return "0";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    string a,b,c;
    cin>>a>>b>>c;
    string ans=sub(b,c);
    cout<<divide(ans,a);
}