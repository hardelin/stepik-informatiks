#include <bits/stdc++.h>
using namespace std;
vector<vector<vector<int>>> g;
vector<vector<int>> used;
map<char, int> d = {{'a', 1}, {'b', 2}, {'c', 3}, {'d', 4}, {'e', 5}, {'f', 6}, {'g', 7}, {'h', 8}};
vector<int> p = { -2, -1, -2, 1, -1, -2, -1, 2, 1, -2, 1, 2, 2, -1, 2, 1 };
queue<int> q;
int main() {
    int n = 8;
    ios::sync_with_stdio(false);
    cin.tie(0);
    g.resize(n+1, vector<vector<int>>(n+1));
    used.resize(n+1, vector<int>(n+1, 0));
    string s1, s2;
    cin >> s1;
    int y1 = s1[1] - '0', x1 = d[s1[0]]; 
    q.push(x1);
    q.push(y1);
    cin >> s2;
    int y2 = s2[1] - '0', x2 = d[s2[0]]; 
    g[x1][y1] = { 0, -1, -1 };
    while (!q.empty()) {
        int a, b;
        a = q.front();
        q.pop();
        b = q.front();
        q.pop();
        used[a][b] = 1;
        for (int i = 0; i <= 14; i += 2) {
            if (a + p[i+1] >= 1 && b + p[i] >= 1 && n >= a + p[i+1] && n >= b + p[i]) {
                if (!used[a + p[i+1]][b + p[i]]) {
                    q.push(a + p[i+1]);
                    q.push(b + p[i]);
                    g[a + p[i+1]][b + p[i]] = { g[a][b][0] + 1, a, b };
                    used[a + p[i+1]][b + p[i]] = 1;
                }
            }
        }
    }
    if (g[x2][y2][0] == -1 || g[x2][y2][0] % 2 == 1){
        cout << -1;
    }
    else{
        cout << g[x2][y2][0] / 2;
    }
    return 0;
}
