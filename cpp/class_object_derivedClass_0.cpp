// 访问	    public	protected	private
// 同一个类	 yes	    yes	        yes
// 派生类	 yes	    yes	        no
// 外部的类	 yes	    no	        no
#include <iostream>

using namespace std;

// * base class
class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

// * derived class
class Rectangle: public Shape
{
    public:
        int getArea()
        {
            return (width*height);
        }
};

int main(void)
{
    Rectangle Rect;

    Rect.setWidth(6);
    Rect.setHeight(8);

    cout << "Total area: " << Rect.getArea() << endl;

    return 0;
}