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

        int arr[n];
        set<int> s;

        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        if((n-s.size())%2 == 0) cout << s.size() << "\n";
        else cout << s.size() - 1 << "\n";
    }

    return 0;
}