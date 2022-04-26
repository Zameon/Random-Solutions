#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int test=1;
    //cin >> test;

    while(test--)
    {
        int n, x, cnt = 0;
        cin >> n >> x;
        
        for(int i=1; i<=n; i++)
        {
            //if(i==1 && x<=n) cnt++;
            if(x%i==0 && x/i <= n) 
            {
                cnt++;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}


