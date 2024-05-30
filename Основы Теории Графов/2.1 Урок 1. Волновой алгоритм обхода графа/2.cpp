#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> g;
vector<vector<int>> used;
vector<int> p = { -2, -1, -2, 1, -1, -2, -1, 2, 1, -2, 1, 2, 2, -1, 2, 1 };
queue<int> q;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    g.resize(n + 1, vector<vector<int>>(n + 1));
    used.resize(n + 1, vector<int>(n + 1, 0));
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    q.push(x1);
    q.push(y1);
    cin >> x2 >> y2;
    g[x1][y1] = { 0, -1, -1 };
    while (!q.empty()) {
        int a, b;
        a = q.front();
        q.pop();
        b = q.front();
        q.pop();
        used[a][b] = 1;
        for (int i = 0; i <= 14; i += 2) {
            if (a + p[i+1] >= 1 && b + p[i] >= 1 && n >= a + p[i+1] && n >= b + p[i]) {
                if (!used[a + p[i+1]][b + p[i]]) {
                    q.push(a + p[i+1]);
                    q.push(b + p[i]);
                    g[a + p[i+1]][b + p[i]] = { g[a][b][0] + 1, a, b };
                    used[a + p[i+1]][b + p[i]] = 1;
                }
            }
        }
    }
    cout << g[x2][y2][0];
    return 0;
}
