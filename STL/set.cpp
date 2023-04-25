#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<char> s;
    string txt;
    cin >> txt;

    for (int i=0; i<txt.size(); i++)
        s.insert(txt[i]);
    
    for (auto el: s)
        cout << el << " ";
    cout << "\n";

    if (s.size()==26)
        cout << "TAK";
    else
        cout << "NIE";

    return 0;
}