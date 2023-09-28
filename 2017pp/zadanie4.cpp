#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ofstream out("wyniki.txt");
vector<vector<int> > v;

void readFromFile()
{
    ifstream in("liczby.txt");
    if (!in.is_open())
    {
        cout << "Blad odczytu pliku;";
        exit(1);
    }

    int a, b, c;
    while (in >> a >> b >> c)
    {
        vector<int> t(3);
        t[0] = a; t[1] = b; t[2] = c;
        v.push_back(t);
    }

    in.close();
}

void saveToFileAllRecords()
{
    for (auto els: v)
    {
        for (auto el: els)
            out << el << " ";
        out << "\n";
    }
}

void solution1()
{

}

void solution2()
{

}

void solution3()
{

}

int main()
{
    readFromFile();
    saveToFileAllRecords();
    solution1();
    solution2();
    solution3();

    return 0;
}
