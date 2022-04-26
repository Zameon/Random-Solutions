#include <iostream>
#include <set>

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        multiset<int> s;
        multiset<int>::iterator it;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for(it = s.begin(); it!=s.end(); it++)
            cout << *it << " ";
    }
}

