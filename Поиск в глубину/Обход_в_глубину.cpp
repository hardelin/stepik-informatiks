#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<set<int>> d(101);
vector<int> used(101, 0);
int cnt = 0;
void dfs(int v, int p = -1) {
    used[v] = 1;
    cnt++;
    while (d[v].size() != 0) {
        if (!used[*d[v].begin()]) {
            dfs(*d[v].begin(), v);
        }
        d[v].erase(d[v].begin());
    }
}
int main() {
    int n, s, f;
    cin >> n >> s;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> f;
            if (f) {
                d[i].insert(j);
                d[j].insert(i);
            }
        }
    }
    dfs(s);
    cout << cnt;
    return 0;
}
