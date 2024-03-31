#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<set<int>> d(100001);
vector<int> used(100001, 0);
set<int> ans;
void dfs(int f = 1){
    used[f] = 1;
    for (auto x : d[f]){
        if (used[x] == 0 && x != f){
            dfs(x);   
        }
    }
    ans.insert(f);
}
int main() {
    int n, m, a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        d[a].insert(b);
        d[b].insert(a);
    }
    dfs();
    cout << ans.size() << endl;
    for (auto g : ans){
        cout << g << ' ';
    }  
    return 0;
}
