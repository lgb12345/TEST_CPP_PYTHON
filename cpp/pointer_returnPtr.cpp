#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int *getRandom()
{
    static int r[10];

    // init the rand(), using time(0) or NULL as seed
    // make doing every rand() get real rand result
    // if not doing this,every rand() is same
    srand((unsigned)time( NULL ));

    for (int i = 0; i < 10; i++)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

int main()
{
    int *p;
    
    // return a pointer which points 
    // the first element of an arrary
    // using this way we can return an arrary
    p = getRandom();

    for ( int i = 0; i < 10; i++)
    {
        cout << "*(p + " << i << ") : ";
        cout << *(p + i) << endl;
    }
    return 0;
}