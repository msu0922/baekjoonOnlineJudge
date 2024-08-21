// https://www.acmicpc.net/problem/1388

#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char tiles[51][51];

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            cin >> tiles[i][j];

    int total = N * M;

    for (int i = 1; i <= N; i++) {
        int cnt = 0;
        for (int j = 1; j <= M; j++) {
            if (tiles[i][j] == '-') {
                cnt += 1;
            } else {
                if (cnt != 0)
                    cnt -= 1;
                total -= cnt;
                cnt = 0;
            }
        }
        if (cnt != 0)
            cnt -= 1;
        total -= cnt;
    }

    for (int j = 1; j <= M; j++) {
        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (tiles[i][j] == '|') {
                cnt += 1;
            } else {
                if (cnt != 0)
                    cnt -= 1;
                total -= cnt;
                cnt = 0;
            }
        }
        if (cnt != 0)
            cnt -= 1;
        total -= cnt;
    }

    cout << total << endl;

    return 0;
}