#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> s;
    s.push(2);
    s.push(7);
    s.push(10);

    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
    cout << s.size() << "\n";

    s.push(45);
    s.push(34);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}