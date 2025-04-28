#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    fgets(s, 100001, stdin);
    // printf("%s", s);

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else if (s[i] == ' ')
        {
            printf(",");
        }
        else if (s[i] == ',')
        {
            printf(" ");
        }
    }

    return 0;
}