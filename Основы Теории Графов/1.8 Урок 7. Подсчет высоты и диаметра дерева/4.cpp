#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int V;
    cin >> V;

    vector<int> parent(V);
    for (int i = 1; i < V; ++i) {
        cin >> parent[i];
    }

    vector<vector<int>> adj(V);

    for (int i = 1; i < V; ++i) {
        adj[parent[i] - 1].push_back(i);
        adj[i].push_back(parent[i] - 1);
    }

    vector<int> dist(V, -1);
    queue<int> q;

    q.push(0);
    dist[0] = 0;

    int farthest_node = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);

                if (dist[v] > dist[farthest_node]) {
                    farthest_node = v;
                }
            }
        }
    }

    fill(dist.begin(), dist.end(), -1);
    q.push(farthest_node);
    dist[farthest_node] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);

                if (dist[v] > dist[farthest_node]) {
                    farthest_node = v;
                }
            }
        }
    }

    cout << dist[farthest_node];

    return 0;
}
