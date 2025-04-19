#include <bits/stdc++.h>
using namespace std;

bool cmp(const string &a, const string &b) {
    size_t i = 0, j = 0;

    while (i < a.length() && j < b.length()) {
        if (i + 1 < a.length() && a[i] == 'l' && a[i + 1] == 'j' &&
            (j + 1 >= b.length() || b[j] != 'l' || b[j + 1] != 'j')) {
            if (b[j] == 'l')
                return false;
            else if (b[j] > 'l')
                return true;
            else
                return false;
        } else if (j + 1 < b.length() && b[j] == 'l' && b[j + 1] == 'j' &&
                   (i + 1 >= a.length() || a[i] != 'l' || a[i + 1] != 'j')) {
            if (a[i] == 'l')
                return true;
            else if (a[i] > 'l')
                return false;
            else
                return true;
        } else if (i + 1 < a.length() && a[i] == 'n' && a[i + 1] == 'j' &&
                   (j + 1 >= b.length() || b[j] != 'n' || b[j + 1] != 'j')) {
            if (b[j] == 'n')
                return false;
            else if (b[j] > 'n')
                return true;
            else
                return false;
        } else if (j + 1 < b.length() && b[j] == 'n' && b[j + 1] == 'j' &&
                   (i + 1 >= a.length() || a[i] != 'n' || a[i + 1] != 'j')) {
            if (a[i] == 'n')
                return true;
            else if (a[i] > 'n')
                return false;
            else
                return true;
        } else if (i + 1 < a.length() && a[i] == 'l' && a[i + 1] == 'j') {
            i += 2;
            j += 2;
        } else if (i + 1 < a.length() && a[i] == 'n' && a[i + 1] == 'j') {
            i += 2;
            j += 2;
        } else {
            if (a[i] != b[j])
                return a[i] < b[j];
            i++;
            j++;
        }
    }

    return a.length() < b.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    for (const string &i: arr) {
        cout << i << "\n";
    }
}