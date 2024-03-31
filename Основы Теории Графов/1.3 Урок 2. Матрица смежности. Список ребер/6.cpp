#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j =0; j < n; j++){
            cin >> x;
            d[i][j] = x;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (d[i][j] == 1 && i != j) cout << 0 << ' ';
            else if (d[i][j] == 0 && i != j) cout << 1 << ' ';
            else cout << d[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
