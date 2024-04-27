#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n;
    vector<vector<int>> d(n + 1);
    for (int i = 2; i <= n; i++) {
        cin >> x;
        d[x].push_back(i);
    }
    set<int> f;
    for (int i = 1; i <= n; i++) {
        if (d[i].empty()) {
            f.insert(i);
        }
    }
    for (auto i : f) {
        cout << i << ' ';
    }
    return 0;
}
