#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string n;
  getline(cin, n);

  int a = n[0] - '0';
  int b = n[4] - '0';
  int c = n[8] - '0';

  if (a + b == c) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}