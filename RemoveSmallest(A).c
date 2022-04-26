#include <stdio.h>

void sortarr(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void rem (int *arr, int idx, int n)
{
    for(int i=idx; i<n; i++)
        *(arr + i) = *(arr + i + 1);
}

int main(void)
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for(int i=0; i<n; i++) scanf("%d", &arr[i]);
        sortarr(arr, n);
        int size = n;
        for(int i=0; i<n; i++)
        {
            if((arr[i+1]-arr[i])== 1 || (arr[i+1]==arr[i]))
            {

                rem(arr, i, n);
                size--;
                for(int j=0; j<n; j++) printf("%d ", arr[j]);
if(size==1) break;
            }
            printf("\n");
        }

        printf("%d\n", size);

    }
}
