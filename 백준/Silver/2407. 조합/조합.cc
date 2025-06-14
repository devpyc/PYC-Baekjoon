#include <bits/stdc++.h>
using namespace std;

string mul(string a, string b) {
    int n = a.size();
    int m = b.size();
    string ans(n + m, '0');

    for (int i = n - 1; i >= 0; i--) {
        int carry = 0;
        for (int j = m - 1; j >= 0; j--) {
            int temp = (ans[i + j + 1] - '0') + (a[i] - '0') * (b[j] - '0') + carry;
            ans[i + j + 1] = temp % 10 + '0';
            carry = temp / 10;
        }
        ans[i] += carry;
    }

    size_t startpos = ans.find_first_not_of("0");
    if (string::npos != startpos) {
        return ans.substr(startpos);
    }
    return "0";
}

bool check(string a, string b) {
    int n1 = a.size(), n2 = b.size();
    if (n1 < n2) return true;
    if (n2 < n1) return false;
    for (int i = 0; i < n1; i++)
        if (a[i] < b[i]) return true;
        else if (a[i] > b[i]) return false;
    return false;
}

string sub(string a, string b) {
    if (check(a, b)) return "0";

    string result = "";
    int n1=a.size(), n2=b.size();
    int diff=n1-n2;
    int cur=0;

    for (int i=n1-1; i>=0; i--) {
        int sub=((a[i]-'0')-cur);
        if (i-diff >= 0)
            sub=sub-(b[i-diff]-'0');
        if (sub<0) {
            sub=sub+10;
            cur = 1;
        } else
            cur = 0;
        result = char(sub + '0') + result;
    }

    size_t pos = result.find_first_not_of("0");
    if (pos!=string::npos)
        return result.substr(pos);
    return "0";
}

string divide(string a,string m) {
    if (m=="0") return "0";
    if (check(a,m)) return "0";

    string cur="",tmp="";

    for (int i=0; i<a.length(); i++) {
        tmp+=a[i];

        while (tmp.length()>1&&tmp[0]=='0')
            tmp.erase(0,1);

        int cnt=0;
        while (!check(tmp, m)) {
            tmp=sub(tmp, m);
            cnt++;
        }
        cur+=to_string(cnt);
    }

    size_t pos = cur.find_first_not_of("0");
    if (pos != string::npos)
        return cur.substr(pos);
    return "0";
}

string solve(int a, int b) {
    if (b > a) return "0";
    if (b == 0 || b == a) return "1";
    if (b > a - b) b = a - b;

    string ans = "1";

    for (int i = 1; i <= b; i++) {
        ans = mul(ans, to_string(a - i + 1));
        ans = divide(ans, to_string(i));
    }

    return ans;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    cout<<solve(n,m);

    return 0;
}