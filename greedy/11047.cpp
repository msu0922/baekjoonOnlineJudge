// https://www.acmicpc.net/problem/11047

#include <iostream>

using namespace std;

int main() {
    int N, K, cnt = 0;
    cin >> N >> K;

    int coins[N];

    for (int i = 0; i < N; i++)
        cin >> coins[i];
    
    for (int i = N - 1; i >= 0; i--) {
        cnt += K / coins[i];
        K = K % coins[i];
    }
    
    cout << cnt << endl;

    return 0;
}