#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> g;
vector<int> used;
void dfs(int v) {
    used[v] = 1;
    for (auto x : g[v]) {
        if (used[x] == 1) {
            cout << "NO";
            exit(0);
        }
        else if (used[x] == 0) {
            dfs(x);
        }
    }
    used[v] = 2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string c;
    cin >> n;
    g.resize(n + 1);
    used.resize(n + 1);
    for (int i = 1; i < n; i++) {
        cin >> c;
        for (int j = 0; j < n - i; j++) {
            if (c[j] == 'R') {
                g[i].push_back(j + i + 1);
            }
            else if (c[j] == 'B') {
                g[j + i + 1].push_back(i);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        dfs(i);
    }
    cout << "YES";
}
