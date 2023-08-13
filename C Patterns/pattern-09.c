/*
Here is the demo of pattern.
1 1 2 1 3 1
1 2 2 2 3 2
1 3 2 3 3 3
1 4 2 4 3 4
1 5 2 5 3 5
*/


#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-2; j++)
        {
            printf("%d %d ", j, i);
        }
        printf("\n");
    }
    return 0;
}