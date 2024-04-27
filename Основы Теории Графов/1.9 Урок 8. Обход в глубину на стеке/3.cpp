#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> g(n+1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> s, used(n+1, 0), pos(n+1, 0);
    s.push_back(1);
    used[1] = 1;
    while (!s.empty())
    {
        int f = s.back();
        if (!pos[f]){
            cout << f << ' ';
            pos[f] = 1;
        }
        s.pop_back();
        used[f] = 1;
        for (auto x : g[f]) {
            if (!used[x]) {
                s.push_back(x);
            }
        }
    }
}
