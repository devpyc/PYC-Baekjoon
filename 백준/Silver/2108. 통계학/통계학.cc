#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int arr[n];
    double sum=0;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

    int mean=round(sum/n);
    sort(arr,arr+n);
    map<int, int> freq;
    for (int i : arr) {
        freq[i]++;
    }
    int fcnt=0;
    for(auto pair:freq) {
        fcnt=max(fcnt,pair.second);
    }
    vector<int> res;
    for (auto pair : freq) {
        if (pair.second == fcnt) {
            res.push_back(pair.first);
        }
    }

    int cmd;
    if(res.size()>1) {
        cmd=res[1];
    }else {
        cmd=res[0];
    }

    int idx=arr[n-1]-arr[0];

    cout<<mean<<"\n"<<arr[n/2]<<"\n"<<cmd<<"\n"<<idx;
}