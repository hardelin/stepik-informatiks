#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<set<int>> d(101);
vector<int> used(101, 0), e(101, -1);
void dfs(int v, int p = 0) {
    used[v] = 1;
    e[v] = p;
    while (d[v].size() != 0) {
        if (e[*d[v].begin()] == p) {
            cout << "NO";
            exit(0);
        }
        if (!used[*d[v].begin()]) {
            dfs(*d[v].begin(), (p+1) % 2);
        }
        d[v].erase(d[v].begin());
    }
}
int main() {
    int n, m, f, r;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> f >> r;
        d[f].insert(r);
        d[r].insert(f);
    }
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            dfs(i);
        }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++) {
        if (e[i] == 0) {
            cout << i << ' ';
        }
    }
    return 0;
}
