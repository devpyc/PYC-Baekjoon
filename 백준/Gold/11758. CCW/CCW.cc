#include <bits/stdc++.h>
using namespace std;

int ccw(int x1, int y1, int x2, int y2, int x3, int y3) {
    return (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
}

struct Point {
    int x,y;
};

int main() {
    cin.tie(0)->sync_with_stdio(0);

    Point p1,p2,p3;

    cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
    int ans=ccw(p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);
    cout<<(ans==0?0:(ans>0?1:-1));
}