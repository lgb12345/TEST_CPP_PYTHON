#include <iostream>

using namespace std;

class Line
{
    public:
        int getLength( void );
        Line( int len );
        Line( const Line &obj );
        ~Line();

    private:
        int *ptr;
};

Line::Line( int len )
{
    cout << "call the constrctor" << endl;
    ptr = new int;
    *ptr =len;
}

Line::Line( const Line &obj )
{
    cout << "call the copy-constructor and allocate storage for ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // * the value of copy
}

Line::~Line( void )
{
    cout << "free memory" << endl;
    delete ptr;
}

int Line::getLength( void )
{
    return *ptr;
}

void display( Line obj )
{
    cout << "the size of line: " << obj.getLength() << endl;
}

int main()
{
    Line line1(10);

    Line line2 = line1; // * call the copy-constructor

    display( line1 );
    display( line2 );

    return 0;
}