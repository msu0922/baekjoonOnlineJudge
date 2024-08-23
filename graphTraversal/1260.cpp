#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

class Node {
    public:
        int node;
        vector<int> child;
        bool visited;
};

Node node[1001];

void dfs(int n) {
    if (!node[n].visited) {
        cout << n << ' ';
        node[n].visited = true;

        if (node[n].child.size() > 1)
            sort(node[n].child.begin(), node[n].child.end());
    
        for (int i = 0; i < node[n].child.size(); i++)
            if (!node[node[n].child[i]].visited)
                dfs(node[n].child[i]);
    }
}

void bfs(int n) {
    queue<int> q;
    q.push(n);
    node[n].visited = true;

    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        cout << parent << ' ';
        
        if (node[parent].child.size() > 1)
            sort(node[parent].child.begin(), node[parent].child.end());
        
        for (int i = 0; i < node[parent].child.size(); i++) {
            if (!node[node[parent].child[i]].visited) {
                q.push(node[parent].child[i]);
                node[node[parent].child[i]].visited = true;
            }
        }
    }
}

int main() {
    int N, M, V;
    cin >> N >> M >> V;

    int p, c;

    for (int i = 1; i <= N; i++) {
        node[i].visited = false;
    }

    for (int i = 1; i <= M; i++) {
        cin >> p >> c;

        node[p].child.push_back(c);
        node[c].child.push_back(p);
    }

    dfs(V);
    cout << endl;

    for (int i = 1; i <= N; i++)
        node[i].visited = false;

    bfs(V);
    cout << endl;

    return 0;
}