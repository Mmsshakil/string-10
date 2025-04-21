#include <stdio.h>
int main()
{
    char str[20];

    // gets(str);             // this will not work for every situation

    fgets(str, 16, stdin); // this will work for every situation but you need to declar the input string size includin null, null will be in the end of the string

    printf("%s", str);

    return 0;
}