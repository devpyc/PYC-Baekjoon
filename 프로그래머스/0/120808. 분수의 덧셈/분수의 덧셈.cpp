#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n1, int d1, int n2, int d2) {
    int n=n1*d2+n2*d1;
    int d=d1*d2;
    return {n/gcd(n,d),d/gcd(n,d)};
}