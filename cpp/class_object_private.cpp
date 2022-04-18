#include <iostream>

using namespace std;

class Box
{
private:
    double width;
public:
    double length;
    void setWidth( double wid );
    double getWidth( void );
};

double Box::getWidth( void )
{
    return width;
}

void Box::setWidth( double wid )
{
    width = wid;
}

int main()
{
    Box box;

    box.length = 10.0;
    cout << "Length of box is: " << box.length << endl;

    // ** set Width drectly, Erro: width is private
    // box.width = 10.0;

    // ** using member function to set Width
    box.setWidth( 10.0 );
    cout << "Width of box is: " << box.getWidth() << endl;

    return 0;
}