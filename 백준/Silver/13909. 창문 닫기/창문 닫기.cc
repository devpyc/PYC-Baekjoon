#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, count=0;
    cin>>n;
    for(int i=1; i*i<=n; i++){
        count++;
    }
    cout<<count;
}