#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // * create a vector to store intiger
    vector<int> vec;
    int i;

    // * show the original size of vec
    cout << "vector size = " << vec.size() << endl;

    // * push five elements into vec
    for(i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }
    cout << "extended vector size = " << vec.size() << endl;

    // * access the five elements in the vec
    for(i = 0; i < 5; i++)
    {
        cout << "value of vec ["<< i <<"] = " << vec[i] << endl;
    }

    // * access the five elements in the vec by iterator
    vector<int>::iterator v = vec.begin();
    while(v != vec.end())
    {
        cout << "value of v = " << *v << endl;
        v ++;
    }
    return 0;
}