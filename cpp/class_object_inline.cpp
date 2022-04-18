/* C++ 内联函数是通常与类一起使用。
如果一个函数是内联的，那么在编译时，编译器会把该函数的代码副本放置在每个调用该函数的地方
在类定义中的定义的函数都是内联函数，即使没有使用 inline 说明符
友元函数没有 this 指针，因为友元不是类的成员。只有成员函数才有 this 指针
*/

#include <iostream>

using namespace std;

inline int Max( int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << "Max(20, 10): " << Max(20, 10) << endl;
    cout << "Max(0, 200): " << Max(0, 200) << endl;
    cout << "Max(100, 1010): " << Max(100, 1010) << endl;
    return 0;
}