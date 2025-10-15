import sys
input = sys.stdin.readline

N, M = map(int, input().split())
x, y, d = map(int, input().split())

g = [list(map(int, input().split())) for _ in range(N)]
seen = [[False] * M for _ in range(N)]
seen[x][y] = True

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def turn_left(d):
    return (d + 3) % 4

cnt = 1
turns = 0

while True:
    d = turn_left(d)
    nx, ny = x + dx[d], y + dy[d]

    if not seen[nx][ny] and g[nx][ny] == 0:
        seen[nx][ny] = True
        x, y = nx, ny
        cnt += 1
        turns = 0
    else:
        turns += 1
        if turns == 4:
            bx, by = x - dx[d], y - dy[d]
            if g[bx][by] == 1:
                break
            x, y = bx, by
            turns = 0
print(cnt)