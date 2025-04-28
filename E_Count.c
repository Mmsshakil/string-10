#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);
    int cont = 0;

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        cont = cont + s[i] - 48;
    }

    printf("%d", cont);

    return 0;
}