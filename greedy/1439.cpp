// https://www.acmicpc.net/problem/1439

#include <iostream>

using namespace  std;

int main() {
    string s = "";
    cin >> s;
    
    char current, next;
    int zeros = 0, ones = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        current = s[i], next = s[i + 1];

        if (current != next)
            if (current == '0')
                ones += 1;
            else
                zeros += 1;
    }

    if (next == '0')
        ones += 1;
    else
        zeros += 1;

    cout << min(ones, zeros) << endl;

    return 0;
}