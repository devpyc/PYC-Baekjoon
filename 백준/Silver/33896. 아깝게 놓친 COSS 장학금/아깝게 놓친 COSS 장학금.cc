#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int score,risk,cost,sum;
};

bool comp(const Student &a, const Student &b) {
    if (a.sum!=b.sum) return a.sum>b.sum;
    if (a.cost!=b.cost) return a.cost<b.cost;
    return a.name<b.name;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<Student>arr;
    int n;
    cin>>n;
    for (int i=0; i<n; i++) {
        string s;
        int a,b,c;
        cin>>s>>a>>b>>c;
        int sum=(a*a*a)/(c*(b+1));
        arr.push_back({s,a,b,c,sum});
    }
    sort(arr.begin(),arr.end(),comp);
    cout<<arr[1].name;
}