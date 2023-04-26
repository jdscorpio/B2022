#include <iostream>
#include <deque>

using namespace std;

void print(deque<int> q)
{
    for (auto el: q)
        cout << el << " ";
    cout << endl;
}

int main()
{
    deque<int> q;

    q.push_back(12);
    q.push_back(31);
    q.push_back(45);
    print(q);
    q.push_front(4);
    q.push_front(56);
    print(q);
    cout << q.front() << "\n";
    cout << q.back() << "\n";
    cout << q.size() << "\n";
    q.pop_back();
    q.pop_front();
    print(q);


    return 0;
}