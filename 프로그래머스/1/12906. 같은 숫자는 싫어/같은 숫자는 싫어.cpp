#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    return arr;
}