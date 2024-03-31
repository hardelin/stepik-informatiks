#include <bits/stdc++.h>
using namespace std;
vector<int> colors, res;
vector<vector<int>> g;
void dfs(int v) {
    colors[v] = 1;
    for (auto x : g[v]) {
        if (colors[x] == 1) {
            cout << "No";
            exit(0);
        }
        else if (colors[x] == 0) {
            dfs(x);
        }
    }
    colors[v] = 2;
    res.push_back(v);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    colors.resize(n+1, 0);
    g.resize(n+1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
    }
    for (int i = 1; i <= n; i++) {
        if (colors[i] == 0) {
            dfs(i);
        }
    }
    cout << "Yes" << endl;
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << ' ';
    }
    return 0;
}
