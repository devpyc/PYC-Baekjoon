#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);


    int a,b,c;
    cin>>a>>b>>c;
    double A=(double)a*b/c;
    double B=(double)a/b*c;
    cout<<(int)max(A,B);
}