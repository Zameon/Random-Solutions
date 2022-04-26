#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    map <int, int> mp;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int max = 0;
    for(auto value : mp)
    {
        if(value.second > max) max = value.second;
    }

    cout << max << "\n";
    return 0;

}
