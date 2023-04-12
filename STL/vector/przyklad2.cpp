#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(4);

    for (auto el: v)
        cout << el << " ";
    cout << endl;

    v.insert(v.begin()+2,14);
    for (auto el: v)
        cout << el << " ";
    cout << endl;

    v.erase(v.end()-2);
    for (auto el: v)
        cout << el << " ";
    cout << endl;

    v.clear();
    cout << "Wektor: ";
    for (auto el: v)
        cout << el << " ";
    cout << endl;





    return 0;
}