#include <iostream>

using namespace std;

int main()
{
    char str1[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
    char str2[6] = {'R', 'U', 'N', 'O', 'O', 'B'};
    char str3[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};

    cout << "The tutorial: ";
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    return 0;
}