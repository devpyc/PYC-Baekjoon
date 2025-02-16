#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    int cntA = 0;
    for(char c : s){
        if(c == 'a') cntA++;
    }

    if(cntA == 0 || cntA == n){
        cout << 0;
        return 0;
    }

    string dob = s + s;

    int sizeW = cntA;
    int cnt = 0;

    for (int i = 0; i < sizeW; i++){
        if(dob[i] == 'a') cnt++;
    }

    int maxA = cnt;

    for (int i = sizeW; i < sizeW + n; i++){
        if(dob[i] == 'a') cnt++;
        if(dob[i - sizeW] == 'a') cnt--;
        maxA = max(maxA, cnt);
    }

    cout << cntA - maxA;
}