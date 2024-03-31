#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, a, b, cnt = 0;
    cin >> n >> m;
    vector<vector<int>> d(n+1, vector<int>(n+1, 0));
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        d[a][b]++;
        d[b][a]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] >= 2 && i > j) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
