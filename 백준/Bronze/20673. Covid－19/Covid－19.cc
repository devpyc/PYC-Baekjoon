#include <bits/stdc++.h>
using namespace std;

int main() {
    int p,q;
    cin>>p>>q;

    if (q > 30) {
        cout << "Red";
    }
    else if (p <= 50 && q <= 10) {
        cout << "White";
    }
    else {
        cout << "Yellow";
    }
}