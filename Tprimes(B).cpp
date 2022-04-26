#include <bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return 1;
    }
    return 0;
}

int main(void)
{
    int test;
    cin >> test;

    while(test--)
    {
        long long n;
        cin >> n;

        if((sqrt(n)*sqrt(n))==n && n!=1)
        {
            if(!prime(sqrt(n))) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }

    return 0;
}
