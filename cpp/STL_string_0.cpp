#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string s1;
    string s2 = s1;
    string s3 = "I am guangbo";
    string s4(10, 'a');
    string s5(s4);
    string s6("I am Ali");
    string s7 = string(6, 'c');

    string s8 = s3 + s6;
    s3 = s6;

    cin >> s1;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s8 << endl;
    cout << "s7 size = " << s7.size() << endl;
    // cout << (s2.empty() ? "This string is empty" : "This string is not empty") << endl;

    // system("pause");
    return 0;

}