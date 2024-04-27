#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b, cnt = 0;
    string e;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n, 0));
    vector<int> col;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a;
            d[i][j] = a;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> b;
        col.push_back(b);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (col[i] != col[j] && d[i][j] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt / 2;
}
