#include <iostream>
#include <stdio.h>

// the char of C style
#include <cstring>

using namespace std;

int main()
{
    char p[1] = {'\0'};
    if ( strcmp (p, "a") == 0)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n"); 
    }
    return 0;
    
}