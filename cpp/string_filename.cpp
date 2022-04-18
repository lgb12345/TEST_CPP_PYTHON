#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    int i = 0;
    while(i < 5)
    {
        string str1 = ".tst";
        char s[10];
        sprintf(s, "%d", i);
        string str2 = s + str1;
        ++ i;
        cout << str2 << endl;
    }
}