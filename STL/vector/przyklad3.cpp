#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &v)
{
    for (auto el: v)
        cout << el << " ";
    cout << endl;
}

vector<int> sort_leniwe(vector<int> &v)
{
    vector<int> u=v;
    sort(u.begin(),u.end());
    return u;
}

int main()
{
    vector<int> v(10);

    for (int i=0; i<10; i++)
        v[i] = 1;
    print(v);

    // wersja dla leniwych
    vector<int> u(10,9);
    print(u);  
    int tab[10] = {1,2,5,1,7,4,3,1,4,0};
    u.insert(u.begin(),tab,tab+10);
    print(u);
    u = sort_leniwe(u);
    print(u);


    return 0;
}