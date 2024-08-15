// https://www.acmicpc.net/problem/2839

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int bag[N + 1];
    for (int i = 1; i <= N; i++)
        bag[i] = -1;

    bag[1] = -1, bag[2] = -1, bag[3] = 1, bag[4] = -1, bag[5] = 1;

    for (int i = 6; i <= N; i++) {
        if (bag[i - 3] != -1 && bag[i - 5] != -1)
            bag[i] = min(bag[i - 3], bag[i - 5]) + 1;
        else if (bag[i - 3] != -1)
            bag[i] = bag[i - 3] + 1;
        else if (bag[i - 5] != -1)
            bag[i] = bag[i - 5] + 1;
    }

    cout << bag[N] << endl;

    return 0;
}