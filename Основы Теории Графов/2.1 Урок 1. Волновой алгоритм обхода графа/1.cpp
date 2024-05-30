#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<int>> d(101);
vector<int> used(101, 0), f(101, 0), dist(101, -1);
queue<int> q;
void bfs(int a) {
    q.push(a);
    while (q.size() != 0) {
        used[q.front()] = 1;
        for (auto x : d[q.front()]) {
            if (used[x] == 0) {
                q.push(x);
                dist[x] = dist[q.front()] + 1;
                f[x] = q.front();
                used[x] = 1;
            }
        }
        q.pop();
    }
}
int main() {
    int n, x, a, b;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (x == 1) {
                d[i].push_back(j);
                d[j].push_back(i);
            }
        }
    }
    cin >> a >> b;
    dist[a] = 0;
    bfs(a);
    if (dist[b] > 0) {
        cout << dist[b];
    }
    else {
        cout << dist[b];
    }
}
