#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    cout << var[0] << endl;

    for (int i = 0; i < MAX; i++)
    {
        // "var" is a constant, counld not become a left value
        // "var" is a constan points the first of "the arr var"
        *var = i;
        cout << var[0] << ", ";
    }
    cout << endl;
    
    cout << var[1] << endl;
    
    // the below operation is legal, not change the value of "var"
    *(var+1) = 200;
    cout << var[1] << endl;
    return 0;
}