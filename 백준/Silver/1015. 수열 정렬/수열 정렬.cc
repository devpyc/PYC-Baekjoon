#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

struct Element {
    int value;
    int index;
};

bool compare(const Element& a, const Element& b) {
    if (a.value == b.value) return a.index < b.index;
    return a.value < b.value;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<Element> elements(N);
    for (int i = 0; i < N; ++i) {
        elements[i] = {A[i], i};
    }
    
    sort(elements.begin(), elements.end(), compare);
    
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        P[elements[i].index] = i;
    }
    
    for (int i = 0; i < N; ++i) {
        cout << P[i] << " ";
    }
    cout << endl;

    return 0;
}