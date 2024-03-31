#include <iostream>
using namespace std;
int main() {
    int n, f, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> f;
            if (i == j && f == 1){
                cnt++;    
            }
        }
    }
    cout << cnt;
    return 0;
}
