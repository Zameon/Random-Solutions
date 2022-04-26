#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        string s;
        cin >> s;

        int zero=0, one=0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }

        if(one == zero) cout << one - 1 << "\n";
        else cout << min(one, zero) << "\n";
    }

    return 0;
}
