// 针对 capacity 这个属性，STL 中的其他容器，如 list map set deque，由于这些容器的内存是散列分布的，因此不会发生类似 realloc() 的调用情况，
// 因此我们可以认为 capacity 属性针对这些容器是没有意义的，因此设计时这些容器没有该属性。
// 在 STL 中，拥有 capacity 属性的容器只有 vector 和 string。
#include <iostream>
#include <vector>

using std::vector;

int main(void)
{
    vector<int> v;
    std::cout << "v.size() == " << v.size() << "  v.capacity() = " << v.capacity() << std::endl;
    v.reserve(10);
    std::cout << "v.size() == " << v.size() << "  v.capacity() = " << v.capacity() << std::endl;
    v.resize(10);
    v.push_back(0);
    std::cout << "v.size() == " << v.size() << "  v.capacity() = " << v.capacity() << std::endl;

    return 0;
}