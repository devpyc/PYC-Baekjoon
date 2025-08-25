#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int arr[3];
        for (int i=0; i<3; i++) {
            cin>>arr[i];
            arr[i]*=arr[i];
        }
        sort(arr,arr+3);
        if (arr[0]==0&&arr[1]==0&&arr[2]==0) {
            return 0;
        }

        cout<<(arr[0]+arr[1]==arr[2]?"right":"wrong")<<"\n";
    }
}