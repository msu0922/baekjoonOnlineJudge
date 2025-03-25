// https://www.acmicpc.net/problem/1003

#include <iostream>
#include <algorithm>

using namespace std;

int N[40], zero[40], one[40];

void fibonacci(int n) {
    zero[0] = 1;
    zero[1] = 0;
    one[0] = 0;
    one[1] = 1;

    if(zero[n] != 0 && one[n] != 0) {
        cout << zero[n] << " " << one[n] << '\n';
    } else {
        for(int i = 2; i < n; i++) {
            zero[i] = zero[i - 1] + zero[i - 2];
            one[i] = one[i - 1] + one[i - 2];
        }
        cout << zero[n] << " " << one[n] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;

    cin >> T;

    for(int i = 0; i < T; i++) {
        cin >> N[i];

        fibonacci(N[i]);
    }
    
    return 0;
}