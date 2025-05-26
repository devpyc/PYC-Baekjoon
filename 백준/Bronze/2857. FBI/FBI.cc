#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<string>arr(5);
    for(int i=0; i<5; i++) {
        cin>>arr[i];
    }
    vector<int>ans;
    bool check=false;
    for(int i=0; i<5; i++) {
        if(arr[i].find("FBI")!=string::npos) {
            cout<<i+1<<" ";
            check=true;
        }
    }
    if(!check) {
        cout<<"HE GOT AWAY!";
    }
}