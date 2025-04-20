#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s", &s); // here %s use to take input as string

    printf("%s\n", s); // here %s use to output the string

    printf("%c", s[1]); // here i want to print only one fix character thats why i use %c

    return 0;
}