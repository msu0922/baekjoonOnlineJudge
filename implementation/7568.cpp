// https://www.acmicpc.net/problem/7568

#include <iostream>

using namespace std;

int N;
int weight[51], height[51], rnk[51];

int main() {
    cin >> N;
    
    for(int i = 1; i <= N; i++) {
        cin >> weight[i] >> height[i]; // i번째 사람의 weight, height
        rnk[i] = 1;
    }
    
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            if(i != j && weight[j] > weight[i] && height[j] > height[i])
                rnk[i] += 1; // 순위를 구하는 문제에서는 비교하면서 본인보다 높은게 얼마나 있는지 구해주면 됨.

    
    for(int i = 1; i <= N; i++)
        cout << rnk[i] << endl;
}