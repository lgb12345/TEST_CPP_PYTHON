#include <iostream>

using namespace std;

int main()
{
    int *ptr = NULL;

    cout << "the value of ptr is " << ptr << endl;

    cout << "the value of *ptr is " << &ptr << endl;

    cout << "the value of NULL is " << NULL << endl;    

    if(!ptr)
    {
        // the value of NULL is 0 
        cout << "the ptr is NULL" << endl; 
    }    
    
    return 0;
}