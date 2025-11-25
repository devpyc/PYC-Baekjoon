#include<bits/stdc++.h>
using namespace std;

struct Point{
    long long x,y;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;

    vector<Point>arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i].x>>arr[i].y;
    }

    long double ans=0;
    for (int i=0; i<n; i++) {
        int j=(i+1)%n;
        ans+=(long double)arr[i].x*arr[j].y-(long double)arr[j].x*arr[i].y;
    }
    cout<<fixed;
    cout.precision(1);
    cout<<abs(ans)/2.0;
}