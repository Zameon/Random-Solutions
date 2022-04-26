#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long x, y, m, cnt = 0;

    cin >> x >> y >> m;
    if(x>=m || y>=m) cout << 0 << "\n";
    else if( x<=0 && y<=0) cout << -1 << "\n";
    else
    {
        while(1)
        {
            if(x>=m || y>=m) break;

            if(x > y)
            {
                long long temp = x;
                x = y;
                y = temp;
            }

            if(x<0 && y>0 && -x>y)
            {
                cnt += (-x)/y;
                x += (-x)/y * y;
            }
            else
            {
                x+=y;
                cnt++;
            }

        }

        cout << cnt << "\n";
    }
    return 0;

}
