#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,string> dict;
    dict["chleb"] = "bread";
    dict["poniedzialek"] = "monday";
    cout << dict["poniedzialek"] << "\n";
    dict["szkola"] = "school";

    for (auto el: dict)
        cout << el.first << " " << el.second << "\n";





}