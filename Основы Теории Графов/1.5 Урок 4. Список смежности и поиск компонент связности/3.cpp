#include <bits/stdc++.h>
using namespace std;
vector<set<int>> d(100001);
vector<int> used(100001, 0);
set<int> q;
void dfs(int v = 1) {
    used[v] = 1;
    q.insert(v);
    for (auto x : d[v]) {
        if (!used[x]) {
            dfs(x);
        }
    }
}
int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        d[b].insert(a);
    }
    dfs();
    for (auto x : q) {
        cout << x << ' ';
    }
    return 0;
}
