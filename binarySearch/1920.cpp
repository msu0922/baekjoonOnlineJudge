// https://www.acmicpc.net/problem/1920

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long N;
    cin >> N;

    vector<long long> A;
    int tmp;

    for (int i = 0; i < N; i++) {
        cin >> tmp;
        A.push_back(tmp);
    }

    sort(A.begin(), A.end());

    int M;
    int num;
    
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> num;
        if (binary_search(A.begin(), A.end(), num))
            cout << "1" << '\n';
        else
            cout << "0" << '\n';
    }

    return 0;
}