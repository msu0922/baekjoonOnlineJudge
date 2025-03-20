// https://www.acmicpc.net/problem/2941

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;

    int cnt = 0;
    int len = word.length();

    for(int i = 0; i < len; i++) {
        if(word[i] == 'c') {
            if(i + 1 < len && (word[i + 1] == '=' || word[i + 1] == '-') ) {
                // c= || c-
                i += 1;
            }
            cnt += 1;
        } else if(word[i] == 'd') {
            if(i + 1 < len && word[i + 1] == '-') {
                // d-
                i += 1;
            } else if(i + 1 < len && word[i + 1] == 'z' && i + 2 < len && word[i + 2] == '=') {
                // dz=
                i += 2;
            }
            cnt += 1;
        } else if((word[i] == 'l' || word[i] == 'n') && i + 1 < len && word[i + 1] == 'j') {
            // lj || nj
            cnt += 1;
            i += 1;
        } else if((word[i] == 's' || word[i] == 'z') && i + 1 < len && word[i + 1] == '=') {
            // s= || z=
            cnt += 1;
            i += 1;
        } else {
            // other
            cnt += 1;
        }
    }

    cout << cnt << '\n';

    return 0;
}