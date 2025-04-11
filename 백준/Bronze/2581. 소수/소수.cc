#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int min_prime = -1;

    for (int i = M; i <= N; ++i) {
        if (is_prime(i)) {
            sum += i;
            if (min_prime == -1) {
                min_prime = i;
            }
        }
    }

    if (min_prime == -1) {
        cout << -1 << endl;
    } else {
        cout << sum << endl << min_prime << endl;
    }

    return 0;
}