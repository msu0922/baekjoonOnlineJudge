// https://www.acmicpc.net/problem/2003

#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[30001] = {0};

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    int cnt = 0;

    for (int i = 1; i <= N; i++) { // start
        int sum = 0;
        int j = i;
        
        while (sum < M) {
            sum += A[j];
            j += 1;
        }

        if (sum == M)
            cnt += 1;
    }

    cout << cnt << endl;

    return 0;
}