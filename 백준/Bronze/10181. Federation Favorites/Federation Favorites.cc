#include <bits/stdc++.h>
using namespace std;

bool check(int n, vector<int>& arr) {
    int sum=0;
    arr.clear();

    for(int i=1; i<=n/2; i++) {
        if(n%i==0) {
            arr.push_back(i);
            sum+=i;
        }
    }
    return sum==n;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int>arr;
    while(1) {
        cin>>n;
        if(n==-1) break;
        if(check(n,arr)) {
            cout<<n<<" = ";
            for(size_t i=0; i<arr.size(); i++) {
                cout<<arr[i];
                if(i<arr.size()-1) {
                    cout<<" + ";
                }
            }
            cout<<"\n";
        } else {
            cout<<n<<" is NOT perfect.\n";
        }
    }
}