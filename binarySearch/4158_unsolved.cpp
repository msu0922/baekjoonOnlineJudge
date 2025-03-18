// https://www.acmicpc.net/problem/4158

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, cnt;
vector<long long> N;

void binarySearch(long long i) { // 이진탐색 구현 방법 알아야 함!
    long long l = 0, r = N.size() - 1;

    while(l <= r) {
        long long mid = (l + r) / 2;

        if(i == N[mid]) {
            cnt += 1;
            return; // 찾았으면 끝내야 함
        } else if(i > N[mid]) {
            l = mid + 1;
        } else if(i < N[mid]) {
            r = mid - 1;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    while(true) {
        cin >> n >> m;

        if(n == 0 && m == 0)
            break;

        N.clear();
        cnt = 0;

        for(int i = 0; i < n; i++) {
            long long tmp;
            cin >> tmp;

            N.push_back(tmp);
        }

        for(int i = 0; i < m; i++) {
            long long tmp;
            cin >> tmp;

            binarySearch(tmp);
        }

        cout << cnt << '\n';
    }
}