#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int arr[10];
    int ans=0;
    for(int i=0; i<10; i++) {
        cin>>arr[i];
        if(arr[i]==1) ans+=90;
        if(arr[i]==2) ans+=180;
        if(arr[i]==3) ans-=90;
        if(ans<0) {
            ans+=360;
        }
    }
    ans%=360;
    if(ans==0)cout<<"N";
    else if(ans==90)cout<<"E";
    else if(ans==180)cout<<"S";
    else if(ans==270)cout<<"W";
}