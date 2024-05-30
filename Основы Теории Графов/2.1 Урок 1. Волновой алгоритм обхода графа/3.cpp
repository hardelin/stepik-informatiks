#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int m, n, naim;

    vector<vector<int>> a(100, vector<int>(100, 0));

    vector<vector<int>> b(100, vector<int>(100, 0));

    vector <int> x;

    vector <int> y;

    vector<int> t(100, 0);

    naim = 10000;

    cin >> n >> m;

    for (int i = 0; i < n; i++)

        for (int j = 0; j < m; j++) {

            cin >> a[i][j];

            if (a[i][j] == 1) {

                x.push_back(i);

                y.push_back(j);

            }

        }

    for (int i = 0; i < n; i++)

        for (int j = 0; j < m; j++) {

            naim = 10000;

            for (int z = 0; z < x.size(); z++) {

                int tc = abs(i - x[z]) + abs(j - y[z]);

                naim = min(naim, tc);

            }

            b[i][j] = naim;

        }



    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) cout << b[i][j] << ' ';

        cout << endl;

    }

    return 0;

}
