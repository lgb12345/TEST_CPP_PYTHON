#include <iostream>

using namespace std;

class Box
{
    double width;

    public:
        friend void printWidth( Box box );
        friend class BigBox;
        void setWidth( double wid );
};

class BigBox
{
    public:
        void Print( int width, Box &box )
        {
            box.setWidth( width );
            cout << "Width of box: " << box.width << endl;
        }
};

void Box::setWidth( double wid )
{
    width = wid;
}

void printWidth( Box box )
{
    cout << "Width of box: " << box.width << endl;
}

int main()
{
    Box box;
    BigBox big;

    box.setWidth( 10.0 ); // * use member function to set width

    printWidth( box );

    big.Print( 20, box );

    // getchar();
    return 0;
}