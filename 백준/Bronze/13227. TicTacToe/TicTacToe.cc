#include <bits/stdc++.h>
using namespace std;

bool solve(string arr[3]) {
    for (int i = 0; i < 3; i++) if (arr[i][0] != '.' && arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) return true;
    for (int j = 0; j < 3; j++) if (arr[0][j] != '.' && arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]) return true;

    if (arr[0][0] != '.' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) return true;
    if (arr[0][2] != '.' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) return true;

    return false;
}

int main() {
    string arr[3];

    for (int i = 0; i < 3; i++) getline(cin, arr[i]);

    if (solve(arr)) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}