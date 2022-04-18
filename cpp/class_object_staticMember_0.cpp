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

            // * plus one as creat obj everytime
            objectCount ++;
        }
        double Volume()
        {
            return length*breadth*height;
        }
    private:
        double length;
        double breadth;
        double height;
};

// * init the static member of class Box
int Box::objectCount = 0;
int main(void)
{
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "Total objects: " << Box::objectCount << endl;

    return 0;
}