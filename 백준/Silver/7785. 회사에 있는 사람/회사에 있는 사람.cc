#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> arr;

    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s2 == "enter") {
            arr.insert(s1);
        } else if (s2 == "leave") {
            arr.erase(s1);
        }
    }
    for (auto it = arr.rbegin(); it != arr.rend(); ++it) {
        cout<<*it<<"\n";
    }
}