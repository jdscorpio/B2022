#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(87);
    v.push_back(101);
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.pop_back();
    v.push_back(91);
    v.push_back(80);
    for (int i=0; i<v.size(); i++)
        cout << v[i] << " ";
   
    cout << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.size() << endl;

    v.push_back(2);
    v.push_back(8);

    vector<int>::iterator it;
    for (it=v.begin(); it!=v.end(); it++)
            cout << *it << " ";
    cout << endl;

    auto x = "3";
    // dla leniwych
    for (auto el: v)
        cout << el << " ";
    cout << endl;


    return 0;
}