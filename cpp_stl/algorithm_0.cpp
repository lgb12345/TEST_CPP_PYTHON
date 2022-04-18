#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{5, 1, 21, 3, 8, 15, 6};

    auto result1 = find(begin(v), end(v), 1);
    auto result2 = find(begin(v), end(v), 12);
    auto result3 = find(begin(v), end(v), 6);

    if (result1 != v.end())
    {
        cout << "vector contain 1" << endl;
    }
    else
    {
        cout << "vector don't contain 1" << endl;
    }

    if (result2 != v.end())
    {
        cout << "vector contain 12" << endl;
    }
    else
    {
        cout << "vector don't contain 12" << endl;
    }

    if (result3 != v.end())
    {
        cout << "vector contain 6" << endl;
    }
    else
    {
        cout << "vector don't contain 6" << endl;
    }

    sort(v.begin(), v.end());
    for (auto n : v)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}