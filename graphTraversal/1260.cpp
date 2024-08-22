#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 
다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.
*/
int N, M, V;

class Node {
    public:
        int node;
        int parent;
        int childCnt;
        vector<int> child;
        int depth;
        bool visited;
};

Node node[1001];

void dfs(int n) {
    if (!node[n].visited) {
        cout << n << ' ';
        node[n].visited = true;

        if (node[n].childCnt > 1)
        sort(node[n].child.begin(), node[n].child.end());
    
    for (int i = 0; i < node[n].childCnt; i++)
        dfs(node[n].child[i]);
    }
}

void bfs(int n) {
    if (!node[n].visited) {
        cout << n << ' ';
        node[n].visited = true;
    }
}

int main() {
    cin >> N >> M >> V;

    int p, c;

    for (int i = 1; i <= N; i++) {
        node[i].childCnt = 0;
        node[i].visited = false;
    }

    node[V].depth = 1;

    for (int i = 1; i <= M; i++) {
        cin >> p >> c;

        node[p].child.push_back(c);
        node[c].parent = p;
        node[p].childCnt += 1;
        node[c].depth = node[p].depth + 1;
    }

    dfs(V);
    cout << endl;

    bfs(V);
    cout << endl;

    return 0;
}