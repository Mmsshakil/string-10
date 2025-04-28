#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);
    int check = 0;

    for (int i = 0, j = length - 1; i < length / 2; i++, j--)
    {
        if (s[i] != s[j])
        {
            check++;
        }
    }
    if (check == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}