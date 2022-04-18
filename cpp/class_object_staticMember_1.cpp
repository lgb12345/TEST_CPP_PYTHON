// 静态成员函数与普通成员函数的区别：
// 静态成员函数没有 this 指针，只能访问静态成员（包括静态成员变量和静态成员函数）。
// 普通成员函数有 this 指针，可以访问类中的任意成员；而静态成员函数没有 this 指针。
#include <iostream>

using namespace std;

class Box
{
    public:
        static int objectCount;
        Box(double l=2.0, double b=2.0, double h=2.0)
        {
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            height = h;
            objectCount ++;
        }
        double Volume()
        {
            return length*breadth*height;
        }
        static int getCount()
        {
            return objectCount;
        }
    private:
        double length;
        double breadth;
        double height;
};
int Box::objectCount = 0;

int main(void)
{
    cout << "Inital Stage Count: " << Box::getCount() << endl;

    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "Final Stage Count: " << Box::getCount() << endl;

    return 0;
}