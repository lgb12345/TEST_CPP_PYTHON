#include <iostream>
#include <list>
#include <string>

using namespace std;

template <typename T>
void showlist(list<T> v)
{
    for (typename list<T>::iterator it = v.begin(); it != v.end(); it ++)
    {
        cout << *it;
    }
    cout << endl;
}

int main()
{
    list<int> l1{8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 7};
    showlist(l1);
    
    // algorithm下的sort函数, #include<algorithm>, sort(a, b, greater<int>())
    // 前两个参数是两个指针（记为分别指向元素a和元素b），最后一个参数是一个比较函数，
    // 默认比较函数返回值为真时，将a到b之间的数从小到大排列；前两个参数为[a,b),即包含元素a，不包含元素b
    
    // 值得注意的是，list容器不能调用algorithm下的sort函数进行排序，
    // 因为sort函数要求容器必须可以随机存储，而list做不到。所以，list自己做了一个自己用的排序函数，用法如下：
    l1.sort();
    showlist(l1);

    list<double> l2{0.1, 0.2};
    showlist(l2);

    list<char> l3(1, 10);
    // showlist(l3);

    list<int> l4(5, 10);
    showlist(l4);

    return 0;
}