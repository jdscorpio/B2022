// Posortuj punkt (x,y)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > points;

    while(n--)
    {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x,y));
        // points[i] = make_pair(x,y);
    }

    sort(points.begin(),points.end());
    for (auto el:points)
        cout << el.first << " " << el.second << "\n";



    return 0;
}