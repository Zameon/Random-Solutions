#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        if(n%4==0)
        {
            vector<int> v;
            for(int i=2; i<=n; i+=2)
            {
                v.push_back(i);
            }
            for(int i=2; i<=n; i+=2)
            {
                if(i==n) v.push_back((i + (n/2 - 1)));
                else v.push_back(i-1);
            }
            cout << "Yes\n";
            for(int i=0; i<n; i++) cout << v[i] << " ";
            cout << "\n";
        }
        else cout << "No\n";
    }
}
