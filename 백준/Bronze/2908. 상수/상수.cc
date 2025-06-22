#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int rA = (A % 10) * 100 + ((A / 10) % 10) * 10 + (A / 100);
    int rB = (B % 10) * 100 + ((B / 10) % 10) * 10 + (B / 100);

    cout << max(rA, rB) << '\n';
    return 0;
}
