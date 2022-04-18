#include <iostream>
#include <map>
#include <string>

using namespace std;

void showmap(map<string, int> v)
{
    for (map<string, int>::iterator it = v.begin(); it != v.end(); it ++)
    {
        // * not use "*it", first represent "key", second represent "value"
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

int main()
{
    // * at map<p1, p2>, the first parm is the type of key,
    // * the second parm is the type of value
    map<string, int> m1;
    m1["Kobe"] = 100;
    m1["James"] = 99;
    m1["Curry"] = 98;

    string s("Jordan");
    m1[s] = 90;

    cout << m1["Kobe"] << endl;
    cout << m1["Jordan"] << endl;

    // * doesn't exit the key "Durant", output the value "0"
    cout << m1["Durant"] << endl;

    // * delete the "Curry" by keyword
    m1.erase("Curry");
    showmap(m1);

    // * add elemant by insert()
    m1.insert(pair<string, int>("Harris", 89));
    showmap(m1);
    
    // * clear all
    m1.clear();

    return 0;
}