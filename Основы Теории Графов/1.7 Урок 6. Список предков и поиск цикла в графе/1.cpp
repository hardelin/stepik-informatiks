#include <bits/stdc++.h>
using namespace std;
vector<int> colors;
vector<vector<int>> g;
void dfs(int v) {
    colors[v] = 1;
    for (auto x : g[v]) {
        if (colors[x] == 1) {
            cout << 1;
            exit(0);
        }
        else if (colors[x] == 0) {
            dfs(x);
        }
    }
    colors[v] = 2;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    colors.resize(n + 1, 0);
    g.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m;
            if (m) {
                g[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (colors[i] == 0) {
            dfs(i);
        }
    }
    cout << 0;
    return 0;
}
