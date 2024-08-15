// https://www.acmicpc.net/problem/11399

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int P[N + 1];
    for (int i = 1; i <= N; i++)
        cin >> P[i];
    
    int time[N + 1];
    time[0] = 0;

    sort(P + 1, P + N + 1);

    for (int i = 1; i <= N; i++)
        time[i] = time[i - 1] + P[i];

    int ans = 0;
    for (int i = 1; i <= N; i++)
        ans += time[i];
    
    cout << ans << endl;

    return 0;
}