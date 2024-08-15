// https://www.acmicpc.net/problem/4673

#include <iostream>

using namespace std;

int main() {
    int d[10001] = {-1};

    for (int i = 1; i <= 10000; i++) {
        if (i < 10)
            d[i] = (i % 10) + i;
        else if (i < 100)
            d[i] = (i / 10) + (i % 10) + i;
        else if (i < 1000)
            d[i] = (i / 100) + (i % 100 / 10) + (i % 10) + i;
        else if (i < 10000)
            d[i] = (i / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10) + i;
        else
            d[i] = (i / 10000) + (i % 10000 / 1000) + (i % 1000 / 100) + (i % 100 / 10) + (i % 10) + i;
    }
    
    for (int i = 1; i <= 10000; i++) {
        bool flag = true;
        for (int j = 1; j <= 10000; j++) {
            if (i == d[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << i << endl;
    }

    return 0;
}