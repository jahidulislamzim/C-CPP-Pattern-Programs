/*
Here is the demo of pattern.
2 4 6 8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50
*/

#include <stdio.h>
int main()
{

    int n, k=1;
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("%d ", k);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}