#include <iostream>

using namespace std;

class Line
{
    public:
        int getLength( void );
        Line( int len);
        Line( const Line &obj );
        ~Line();

    private:
        int *ptr;
};

Line::Line( int len )
{
    cout << "call constructor" << endl;

    ptr = new int;
    *ptr = len;
}

Line::Line( const Line &obj )
{
    cout << "call copy-constructor and allocate storage for ptr" << endl;
    ptr = new int;
    *ptr = *obj.ptr; // * copy value
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

void display( Line obj)
{
    cout << "the size of line: " << obj.getLength() << endl;
}

int main()
{
    Line line( 10 );
    
    display( line );

    return 0;
}