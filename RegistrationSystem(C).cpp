#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    map <string, int> mp;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        if(mp[s] == 1) cout << "OK" << "\n";
        else cout << s << mp[s]-1 << "\n";
    }
    return 0;

}
