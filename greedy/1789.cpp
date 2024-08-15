// https://www.acmicpc.net/problem/1789

/*
int rotoRl...
*/

#include <iostream>

using namespace std;

int main() {
    long long S = 0, i = 1, cnt = 0;
    cin >> S;

    while (S >= i) {
        S -= i;
        i += 1;
        cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}