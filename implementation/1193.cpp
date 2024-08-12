// https://www.acmicpc.net/problem/1193

/*
1/1(1)
1/2(2)  2/1(3)
3/1(4)  2/2(5)  1/3(6)
1/4(7)  2/3(8)  3/2(9)  4/1(10)
...
*/

#include <iostream>

using namespace std;

int main() {
    int input = 0;
    cin >> input;

    int adder = 1, first = 1, line = 1;

    while (first + adder <= input) {
        first += adder; // 해당 line의 처음은 몇 번째?
        adder += 1; // 다음 line과의 차이
        line += 1; // 몇 번째 line?
    }

    if (line % 2 == 0) {
        int numer = 1 + (input - first);
        int denomin = line - (input - first);
        cout << numer << '/' << denomin << endl;

        return 0;
    }
    int denomin = 1 + (input - first);
    int numer = line - (input - first);

    cout << numer << '/' << denomin << endl;

    return 0;
}