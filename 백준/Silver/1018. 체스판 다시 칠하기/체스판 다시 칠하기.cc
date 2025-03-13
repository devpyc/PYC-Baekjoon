#include<iostream>
#include<algorithm>
using namespace std;

int chess[51][51];

int check(int x,int y)
{
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == chess[i][j]) cnt1++;
            if ((i + j + 1) % 2 == chess[i][j]) cnt2++;
        }
    }

    return min(cnt1, cnt2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    int mini = 2500;
    char c;

    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> c;
            if (c == 'B') chess[i][j] = 0;
            else chess[i][j] = 1;
        }
    }
    for (int i = 0; i <= N-8; i++) {
        for (int j = 0; j <= M-8; j++) {
            if (mini > check(i, j)) mini = check(i, j);
        }
    }
    cout << mini;
}