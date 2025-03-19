#include <bits/stdc++.h>
using namespace std;

string add(const string &a, const string &b) {
    string A = a, B = b;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if (A.size() < B.size()) swap(A, B);

    string res = "";
    int carry = 0;
    for (size_t i = 0; i < A.size(); i++) {
        int digitA = A[i] - '0';
        int digitB = (i < B.size() ? B[i] - '0' : 0);
        int sum = digitA + digitB + carry;
        carry = sum / 10;
        res.push_back((sum % 10) + '0');
    }
    if (carry)
        res.push_back(carry + '0');

    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 1 || n == 2){
        cout << "1";
        return 0;
    }

    string f1 = "1", f2 = "1", f3;

    for (int i = 3; i <= n; i++){
        f3 = add(f1, f2);
        f1 = f2;
        f2 = f3;
    }

    cout << f2;
}