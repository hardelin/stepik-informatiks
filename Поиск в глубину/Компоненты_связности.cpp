#include <bits/stdc++.h>
using namespace std;
vector<set<int>> d(100001);
vector<int> used(100001, 0);
vector<set<int>> ans;
set<int> vev;
void dfs(int f = 1) {
    used[f] = 1;
    for (auto x : d[f]) {
        if (used[x] == 0 && x != f) {
            dfs(x);
        }
    }
    vev.insert(f);
}
int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        d[a].insert(b);
        d[b].insert(a);
    }
    for (int i = 1; i <= n; i++) {
        if (used[i] == 0) {
            vev.clear();
            dfs(i);
            ans.push_back(vev);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].size() << endl;
        for (auto g : ans[i]) {
            cout << g << ' ';
        }
        cout << endl;
    }
    return 0;
}
