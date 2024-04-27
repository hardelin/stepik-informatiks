#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> d(n+1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        d[a].push_back(b);
        d[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        cout << d[i].size() << ' ';
    }
}
