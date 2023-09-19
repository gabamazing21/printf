#include "main.h"
#include <stdio.h>
int main()
{
    string str = "Hello, World!";
    char ch = 'A';
    int len1, len2, len3, len4, len5;
    string nullStr = NULL;
    _printf("Testing custom _printf function:\n");
    
    len1 = _printf("String: %s\n", str);
    printf("Length of String: %d\n", len1);

    len2 = _printf("Character: %c\n", ch);
    printf("Length of Character: %d\n", len2);

    len3 = _printf("Percent sign: %%\n");
    printf("Length of Percent sign: %d\n", len3);

    len4 = _printf("NULL String: %s\n", nullStr);
    printf("Length of NULL String: %d\n", len4);

    len5 = _printf("Unsupported Specifier: %x\n", 42);
    printf("Length of Unsupported Specifier: %d\n", len5);

    return (0);
}

