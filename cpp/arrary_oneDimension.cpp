#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
    int n[10];

    for ( int i = 0; i < 10; i++ )
    {
        n[i] = i + 100;
    }

    // setw() 函数只对紧接着的输出产生作用。
    // 当后面紧跟着的输出字段长度小于 n 的时候，
    // 在该字段前面用空格补齐，当输出字段长度大于 n 时，全部整体输出。
    cout << "element" << setw(13) << "value" << endl;

    for ( int j = 0; j < 10; j++ )
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }
    return 0;
}   