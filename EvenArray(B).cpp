#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        int n, odd=0, even=0;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        if(n==1)
        {
            if(arr[0]%2==0) cout << "0\n";
            else cout << "-1\n";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]%2 == 0 && i%2!=0) even++;
                else if(arr[i]%2!=0 && i%2==0) odd++;
            }

            if(odd == even) cout << even << "\n";
            else cout << "-1\n";
        }
    }

    return 0;
}
