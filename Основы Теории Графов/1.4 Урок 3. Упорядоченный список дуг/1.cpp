#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, f, cnt = 0;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f;
            d[i][j] = f;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (d[i][j] == 1) {
                cout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }
}
