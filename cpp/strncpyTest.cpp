
//#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    char m[] = "hello";
    char m2[20];
    char m3[30];

    strcpy(m2, m);
    printf("%s\n",m2);

    strncpy(m3, m, 20 - 1);
}

