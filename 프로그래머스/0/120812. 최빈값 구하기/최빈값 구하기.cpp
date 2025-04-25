#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    map<int,int>arr;
    for(int i:array){
        arr[i]++;
    }
    
    auto x=max_element(arr.begin(),arr.end(),[](const auto& a, const auto&b){ return a.second<b.second;});
    
    int cnt=0;
    int res=x->first;
    for(const auto& i:arr){
        if(i.second==x->second) cnt++;
    }
    return cnt>1?-1:res;
}