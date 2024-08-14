// https://www.acmicpc.net/problem/14916

/*
 0   1   2   3   4   5   6   7   8   9   10   11   12  ...
[0] [x] [1] [x] [2] [1] [3] [2] [4] [3] [2]  [4]  [3]  ...
*/


#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int ans[n + 1];

    for (int i = 0; i <= n; i++)
        ans[i] = 0;
    ans[0] = 0, ans[1] = -1, ans[2] = 1, ans[3] = -1, ans[4] = 2, ans[5] = 1;

    for (int i = 6; i <= n; i++)
        if (ans[i - 2] != -1 && ans[i - 5] != -1)
            ans[i] = min(ans[i - 2], ans[i - 5]) + 1;
        else if (ans[i - 2] == -1)
            ans[i] = ans[i - 5] + 1;
        else if (ans[i - 5] == -1)
            ans[i] = ans[i - 2] + 1;

    cout << ans[n] << endl;

    return 0;
}