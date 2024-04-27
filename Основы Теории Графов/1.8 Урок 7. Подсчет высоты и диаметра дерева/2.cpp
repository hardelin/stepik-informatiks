#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<int> e;
void dfs(int v = 1) {
    if (g[v].empty()) {
        e[v] = 1;
        return;
    }
    for (auto x : g[v]) {
        dfs(x);
        e[v] += e[x];
    }
    e[v]++;
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n;
    g.resize(n + 1);
    e.resize(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> x;
        g[x].push_back(i);
    }
    dfs();
    for (int i = 1; i <= n; i++) {
        cout << e[i] << ' ';
    }
    return 0;
}
