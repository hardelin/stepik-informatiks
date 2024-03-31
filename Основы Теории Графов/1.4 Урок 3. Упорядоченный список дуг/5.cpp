#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, a, b, cnt = 0, f;
    cin >> n >> m;
    vector<vector<int>> d(n+1, vector<int>(n+1, 0));
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        d[a][b]++;
        d[b][a]++;
    }
    cin >> f;
    for (int i = 1; i < d[f].size(); i++){
        cnt += d[f][i];
    }
    cout << cnt;
    return 0;
}
