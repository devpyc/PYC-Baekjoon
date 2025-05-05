#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<string,int>arr={
        {"BANANA",0},
        {"PLUM",0},
        {"STRAWBERRY",0},
        {"LIME",0}
    };

    for(int i=0; i<n; i++) {
        string s;
        int x;
        cin>>s>>x;
        arr[s]+=x;
    }

    bool check=false;
    for(const auto& ans:arr) {
        if(ans.second==5) {
            check=true;
            break;
        }
    }
    (check)?cout<<"YES":cout<<"NO";
}