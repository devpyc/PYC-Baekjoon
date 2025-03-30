#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        cin.ignore();
        string s, input = "";
        getline(cin, s);

        for(char c : s){
            if(!isspace(c))
                input.push_back(toupper(c));
        }

        int L = input.size();
        string ans(L, ' ');

        int pos = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; i + j * n < L; j++){
                ans[i + j * n] = input[pos++];
            }
        }
        cout << ans << "\n";
    }
}