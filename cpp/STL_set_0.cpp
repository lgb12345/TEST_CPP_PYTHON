#include <iostream>
#include <set>
#include <string>

using namespace std;

template <typename T>
void showset(set<T> v)
{
    // * need a "typename" before set<T>, because ‘std::set<T>’ is a dependent scope
    for (typename set<T>::iterator it = v.begin();it != v.end(); it ++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    // * rank automatically from small to large
    set<int> s1{9, 8 , 1, 2, 3, 4, 5, 5, 5, 6, 7, 7};
    showset(s1);

    // * rank automatically by lexicographical ordering
    set<string> s2{"hello", "sysy", "school", "hello" };
    showset(s2);

    // * do nothing because s1 has this number "9"
    s1.insert(9);
    showset(s1);

    // * don't have this tring "aaa", add it and sort
    s2.insert("aaa");
    showset(s2);

    return 0;
}