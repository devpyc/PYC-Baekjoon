#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while (n--) {
        string s;
        getline(cin,s);
        stringstream ss(s);

        vector<long long> arr;
        long long x;
        while (ss>>x) arr.push_back(x);

        long long ans=0;
        for (size_t i=0; i<arr.size(); ++i) {
            for (size_t j=i+1; j<arr.size(); ++j) {
                long long GCD=gcd(llabs(arr[i]),llabs(arr[j]));
                ans=max(ans,GCD);
            }
        }
        cout<<ans<<"\n";
    }
}