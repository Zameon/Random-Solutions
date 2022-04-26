#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        map <char, int> m;
        for(int i=0; i<6; i++)
        {
            char x;
            cin >> x;
            m.insert({x, i});
        }

        if(m['r']<m['R'] && m['b']<m['B'] && m['g']<m['G']) cout << "YES\n";
        else cout << "NO\n";

    }
}
