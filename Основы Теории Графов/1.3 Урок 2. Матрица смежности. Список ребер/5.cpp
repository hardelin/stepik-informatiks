#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, k, a, b;
    cin >> n >> m;
    vector<int> d(m+1), f(m+1);
    for (int i = 1; i <= m; i++){
        cin >> a >> b;
        d[i] = a;
        f[i] = b;
    }
    cin >> k;
    int cnt = -1;
    for (int i = 1; i <= m; i++){
        if (d[i] == d[k] || f[i] == f[k] || d[i] == f[k] || f[i] == d[k]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
