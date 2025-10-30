#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n;
    cin>>n;
    int cnt=1;
    int r=1,l=1,sum=1;

    while(l!=n){
        if(sum==n){
            cnt++;
            l++;
            sum+=l;
        }else if(sum>n){
            sum-=r;
            r++;
        }else{
            l++;
            sum+=l;
        }
    }
    cout<<cnt;
}