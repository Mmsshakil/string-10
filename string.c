#include <stdio.h>
int main()
{
    int n = 5;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}