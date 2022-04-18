// * complie by commomd: g++ -std=c++11 -g STL_vector_2.cpp -o STL
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
void showvector(vector<T> v)
{
    for(typename vector<T>::iterator it = v.begin(); it != v.end(); it ++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    vector<string> v6 = { "hi", "my", "name", "is", "lee" };
    showvector(v6);

    // * resize the size of vector v6
    v6.resize(3);
    showvector(v6);

    vector<int> v5 = { 1, 2, 3, 4, 5 };

    // * access the first and last element of vector v5
    cout << v5.front() << endl;
    cout << v5.back() << endl;

    showvector(v5);

    // * delete the last element of vector v5
    v5.pop_back();
    showvector(v5);

    // * push one element at the end
    v5.push_back(6);
    showvector(v5);

    // * insert one element at the second site
    v5.insert(v5.begin()+1, 9);
    showvector(v5);

    // * delete the fourth element
    v5.erase(v5.begin() + 3);
    showvector(v5);

    // * insert seven "8" continuously at the second site
    v5.insert(v5.begin() + 1, 7, 8);
    showvector(v5);

    // * clear all content of vector v5
    v5.clear();
    showvector(v5);

    return 0;

}