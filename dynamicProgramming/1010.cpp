// https://www.acmicpc.net/problem/1010

/*
nCk = (n-1)C(k-1) + (n-1)C(k)
*/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int T = 0;
    cin >> T;

    for (int c = 0; c < T; c++) {
        int n, m = 0;
        cin >> n >> m;
        
        int comb[31][31] = {0}; // [m][n]

        for (int i = 1; i <= 30; i++)
            comb[i][1] = i;

        for (int n = 2; n <= 30; n++) {
            for (int m = 2; m <= 30; m++) {
                comb[m][n] = comb[m-1][n-1] + comb[m-1][n];
            }
        }

        cout << comb[m][n] << endl;
    }
        

    return 0;
}