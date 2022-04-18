#include <iostream>

using namespace std;

int main()
{
    int num[5];
    int *ptr;
    
    // five ways to assign the element of num

    // make ptr points the first element of num
    ptr = num; *ptr = 10;

    ptr ++ ; *ptr = 20;
    ptr = &num[2]; *ptr = 30;

    // make ptr points the fourth element of num
    ptr = num + 3; *ptr =40;

    ptr = num; *(ptr + 4) = 50;
    
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << ", ";
    }
    
    cout << endl;
    return 0;
}