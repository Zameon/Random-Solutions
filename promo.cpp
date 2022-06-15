#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n, q, x, y, ans;
    cin >> n >> q;

    long long arr[n];
    for(long long i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);

    long long totsum = arr[0];
    for(long long i=1; i<n; i++) 
    {
        totsum += arr[i];
        arr[i] = totsum;
    }

    for(long long i=0; i<q; i++)
    {
        ans = 0;
        cin >> x >> y;
        if(n==x) ans = arr[n-x+y-1];
        else ans = arr[n-x+y-1] - arr[n-x-1];
        cout << ans << "\n";
    }

    return 0;


}