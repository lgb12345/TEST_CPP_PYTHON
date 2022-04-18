#include <iostream>

using namespace std;

class printData
{
    public:
        void print(int i)
        {
            cout << "The integer is: " << i << endl;
        }
        void print(double f)
        {
            cout << "The floating number is: " << f << endl;
        }
        void print(char c[])
        {
            cout << "The char is: " << c << endl;
        }
};

int main(void)
{
    printData pd;

    pd.print(5);
    pd.print(500.63);
    char c[] = "hello C++";
    pd.print(c);

    return 0;
}