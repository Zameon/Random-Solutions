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

        vector <int> v;
        set <int> s;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            s.insert(x);
        }

        for(int i=1; i<=s.size(); i++) cout << s.size() << " ";
        for(int i=1; i<=(n-s.size()); i++) cout << s.size() + i << " ";
        cout << "\n";
    }
    return 0;
}
