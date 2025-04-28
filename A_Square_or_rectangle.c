#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int width, height;
        scanf("%d %d", &width, &height);
        if (width == height)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}