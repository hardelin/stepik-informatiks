#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> stack;
    int a;
    string s;
    cin >> s;
    while (s != "exit")
    {
        if (s == "push") {
            cin >> a;
            stack.push_back(a);
            cout << "ok" << '\n';
        }
        else if (s == "pop") {
            cout << stack.back() << '\n';
            stack.pop_back();
        }
        else if (s == "back")
        {
            cout << stack.back() << '\n';
        }
        else if (s == "size") {
            cout << stack.size() << '\n';
        }
        else if (s == "clear") {
            cout << "ok" << '\n';
            stack.clear();
        }
        cin >> s;
    }
    cout << "bye";
    return 0;
}
