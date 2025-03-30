#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<tuple<string, int, int, int>> arr;

    for(int i = 0; i < n; i++) {
        string name;
        int day, month, year;
        cin >> name >> day >> month >> year;

        arr.push_back(make_tuple(name, year, month, day));
    }

    auto Max = *min_element(arr.begin(), arr.end(),
        [](const auto& a, const auto& b) {
            return make_tuple(get<1>(a), get<2>(a), get<3>(a)) < make_tuple(get<1>(b), get<2>(b), get<3>(b));
        });

    auto Min = *max_element(arr.begin(), arr.end(),
        [](const auto& a, const auto& b) {
            return make_tuple(get<1>(a), get<2>(a), get<3>(a)) < make_tuple(get<1>(b), get<2>(b), get<3>(b));
        });

    cout << get<0>(Min) << '\n' << get<0>(Max) << '\n';
}