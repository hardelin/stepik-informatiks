#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, f, r = 0, t = 0;
    cin >> n;
    vector<int> a(n), s(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> f;
            a[i] += f;
            s[j] += f;
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            r++;
        }
        if (s[i] == 0){
            t++;
        }
    }
    cout << t << ' ' << r;
    return 0;
}
