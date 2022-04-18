#include <iostream>

// the char of C style
#include <cstring>

using namespace std;

int main()
{
    char str1[13] = "runoob";
    char str2[13] = "google";
    char str3[13];
    char *str4 = "zzzz";
    int len;

    strcpy( str3, str1);
    cout << "strcpy (str3, str1) : " << str3 << endl;

    strcat( str1, str2 );
    cout << "strcat (str1, str2): " << str1 << endl;

    len = strlen(str1);
    cout << "strlen(str1): " << len << endl;

    len = strlen(str3);
    cout << "strlen(str3): " << len << endl;

    len = strlen(str4);
    cout << "strlen(str4): " << len << endl;
    cout << "str4: " << str4[0] << endl;

    return 0;

}