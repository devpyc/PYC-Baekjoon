#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n,a,b;
    cin>>n>>a>>b;

    int a1=1,a2=1;
    while (n--) {
        a1+=a; a2+=b;
        if (a1<a2) {
            swap(a1,a2);
        }
        if (a1==a2) a2--;
    }
    cout<<a1<<" "<<a2;
}