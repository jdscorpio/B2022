#include <iostream>
#include <utility>

using namespace std;

int main()
{
    pair<int,int> p1;
    p1.second = 4;
    cout << p1.first << " " << p1.second << "\n";

    int x = 31, y = 47;
    pair<int,int> p2 = make_pair(x,y);
    cout << p2.first << " " << p2.second << "\n";

    pair<string,string> p3("xyz","abcd");
    cout << p3.first << " " << p3.second << "\n";

    pair <char,double> p4 = {'f',4.56};
    cout << p4.first << " " << p4.second << "\n";





    return 0;
}