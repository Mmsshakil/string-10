#include <stdio.h>
int main()
{
    char s[50];
    scanf("%s", &s);
    // printf("%s\n", s);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        // printf("%c", s[i]);
        count++;
    }
    // int i = 0;
    // while (i != '\0')
    // {
    //     count++;
    //     i++;
    // }

    printf("%d", count);

    return 0;
}