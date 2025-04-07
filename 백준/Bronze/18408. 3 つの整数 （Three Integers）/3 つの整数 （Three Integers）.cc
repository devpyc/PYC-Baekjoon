#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt1=0,cnt2=0;
    int arr[3];
    for(int i=0; i<3; i++) {
        cin>>arr[i];
        if(arr[i]==1) {
            cnt1++;
        }else {
            cnt2++;
        }
    }
    cout<<(cnt1<cnt2)+1;
}