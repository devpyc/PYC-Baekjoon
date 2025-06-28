#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int step = 1;
    int range = 1;

    while (range < n) {
        range += 6 * step;
        step++;
    }

    cout << step << endl;

    return 0;
}
