// Sortowanie wierszy w tablicy

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int> > v(n);
    for (int i=0; i<n; i++)
    {
        int k;
        cin >> k;

        for (int j=0; j<k; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (auto el1 :v)
        {
            sort(el1.begin(),el1.end());
            for (auto el2: el1)
                cout << el2 << " ";
            cout << "\n";
        }


}