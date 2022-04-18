#include <iostream>

using namespace std;
const int MAX = 4;

int main()
{
    // using an arrary of pointer to store a list of strings
    const char *names[MAX] =
    {
        "Zara",
        "Hina",
        "Nuha",
        "Sara",
    };

    for (int i = 0; i < MAX; i++ )
    {
        cout << "the value of names["<< i <<"] = ";
        cout << names[i] << endl;
    }
    return 0;
}