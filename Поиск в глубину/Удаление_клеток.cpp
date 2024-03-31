#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> lst;
vector<vector<vector<vector<int>>>> g;
vector<vector<int>> used;
void dfs(vector<int> v = {0, 0}) {
    used[v[0]][v[1]] = 1;
    for (vector<int> x : g[v[0]][v[1]]) {
        if (!used[x[0]][x[1]]) {
            dfs(x);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    g.resize(n, vector<vector<vector<int>>>(m));
    lst.resize(n, vector<char>(m));
    used.resize(n, vector<int>(m, 0));
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            lst[i][j] = s[j];
            if (lst[i][j] == '#') {
                if (j > 0) {
                    if (lst[i][j-1] == '#') {
                        g[i][j].push_back({ i, j - 1 });
                        g[i][j - 1].push_back({ i, j });
                    }
                }
                if (i > 0) {
                    if (lst[i - 1][j] == '#') {
                        g[i][j].push_back({ i - 1, j });
                        g[i - 1][j].push_back({ i, j });
                    }
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!used[i][j] && lst[i][j] == '#') {
                cnt++;
                dfs({ i, j });
            }
        }
    }
    cout << cnt;
    return 0;
}
