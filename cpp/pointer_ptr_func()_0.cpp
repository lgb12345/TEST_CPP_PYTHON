#include <iostream>
#include <ctime>

using namespace std;

void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec;

    getSeconds( &sec );
    cout << "number of seconds : " << sec << endl;
    return 0;
}

void getSeconds(unsigned long *par)
{
    // obtain the second of the present
    *par = time( NULL );
    return;
}