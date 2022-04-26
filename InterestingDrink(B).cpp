#include <bits/stdc++.h>
using namespace std;

int binit(int *arr, int begin, int end, int x, int num)
{
    int a, mid = (begin+end)/2;
    if(begin <= end)
    {
        if(x == arr[mid])
        {
            num++;
            a = num;
            printf("Firstif %d %d\n", x, num);
            printf("low = %d, high = %d\n", begin, end);
        }
        else if(x < arr[mid])
        {
            //num = num +(end - begin) + 1;
            a =  num;
            printf("Secindif %d %d\n", x, num);
            printf("low = %d, high = %d\n", begin, end);
            binit(arr, begin, mid-1, x, num);
        }
        else if(x > arr[mid])
        {
            num = num +(mid - begin) + 1;
            printf("Secindif %d %d\n", x, num);
            a = num;
            printf("low = %d, high = %d\n", begin, end);
            binit(arr, mid+1, end, x, num);
        }
    }

}

int main(void)
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    int m;
    cin >> m;
    int taka[m], ans[m];
    for(int i=0; i<m; i++)
    {
        cin >> taka[i];
        int low = 0, high = n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(taka[i] < arr[mid]) high = mid - 1;
            else low = mid+1;
        }

        cout << low << "\n";
    }
    //for(int i=0; i<m; i++) cout << v[i] << "\n";
    return 0;
}
