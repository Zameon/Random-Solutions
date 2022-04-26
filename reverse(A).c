#include <stdio.h>
#define max 500

int main(void)
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n, l, r=0, i, x=0;
        scanf("%d", &n);

        int arr[max+1], newarr[max+1];
        for(i=1; i<=n; i++) scanf("%d", &arr[i]);

        for(i=1; i<=n; i++)
        {
            if(i!= arr[i])
            {
                x = i;
                while(arr[i]!= x) i++;
                r = i;
                break;
            }
        }

        //printf("%d %d\n", x, r);
        for(int i = r, j=x; i>=x; i--, j++)
        {
            newarr[j] = arr[i];
        }
        for(int i=1, j=1; i<=n; i++, j++) 
        {
            if(i >=x && i<=r) continue;
            newarr[j] = arr[i];
            //printf("%d ", newarr[i]);
        }
        //printf("\n");
        for(int i=1; i<=n; i++) printf("%d ", newarr[i]);
        printf("\n");
    }

    return 0;
}