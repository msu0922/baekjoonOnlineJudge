// https://www.acmicpc.net/problem/1065

#include <iostream>

using namespace std;

bool checkHan(int n) {
    string strN = to_string(n);
    int dgt = strN.length(), diff = 0;
    bool flag = true;

    for (int i = 0; i < strN.length() - 1; i++) {
        if (i == 0)
            diff = strN[i] - strN[i + 1];
        else
            if(strN[i] - strN[i + 1] != diff) {
                flag = false;
                break;
            }
    }

    return flag;
}

int main() {
    int N, cnt = 0;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (checkHan(i))
            cnt += 1;
    }
    
    cout << cnt << endl;
}
