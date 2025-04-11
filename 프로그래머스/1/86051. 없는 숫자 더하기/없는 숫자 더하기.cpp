#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    return 45-accumulate(arr.begin(),arr.end(),0);
}