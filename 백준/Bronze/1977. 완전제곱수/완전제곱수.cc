#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n,m;
    cin>>n>>m;
    
    int sum=0;
    bool check=false;
    
    vector<int>arr;
    
    for (int i=n; i<=m; i++) {
        double ans=sqrt(i);
        
        if (ans==(int)ans) {
            sum+=i;
            arr.push_back(i);
            check=true;
        }
    }
    if (check) cout<<sum<<"\n"<<*min_element(arr.begin(),arr.end());
    else cout<<-1;
}