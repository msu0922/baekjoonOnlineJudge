// https://www.acmicpc.net/problem/10773

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    int K, num;
    cin >> K;

    for(int i = 1; i <= K; i++) {
        cin >> num;

        if(num == 0)
            st.pop();
        else
            st.push(num);
    }

    int sum = 0, size = st.size();
    
    for (int i = 0; i < size; i++) {
        sum += st.top();
        st.pop();
    }

    cout << sum << endl;
}