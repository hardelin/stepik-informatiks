#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> g;
vector<int> sm;
void dfs(int v = 1, int d = 0) {
    sm[d]++;
    for (auto e : g[v]) {
        dfs(e, d + 1);
    }
}
int main() {
    int n, x;
    cin >> n;
    g.resize(n + 1);
    sm.resize(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        cin >> x;
        g[x].push_back(i);
    }
    dfs();
    int cnt = 0;
    for (auto x : sm) {
        cnt += x % 2;
    }
    cout << cnt;
}
