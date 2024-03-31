#include <bits/stdc++.h>
using namespace std;
vector<set<int>> g;
vector<int> color;
static int e = 0;
static int r = 0;
void dfs(int v = 1, int p = -1) {
    r++;
    color[v] = 1;
    for (auto f : g[v]) {
        if (f != p) {
            if (color[f] == 1) {
                cout << "NO";
                exit(0);
            }
            e++;
            dfs(f, v);
        }
    }
    color[v] = 2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n;
    color.resize(n + 1, 0);
    g.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (x) {
                g[i].insert(j);
                g[j].insert(i);
            }
        }
    }
    dfs();
    if (e == n - 1 and r == n) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
