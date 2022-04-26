#include <bits/stdc++.h>
using namespace std;

long long getGCD(vector <long long> v, int n, int key)
{
    long long gcd;
    if(key == 0)
    {
        gcd = v[0];
        for(int i=0; i<n; i+=2)
        {
            gcd = __gcd(v[i], gcd);
            if(gcd == 1) return 1;
        }
    }
    else if(key == 1)
    {
        gcd = v[1];
        for(int i=1; i<n; i+=2)
        {
            gcd = __gcd(v[i], gcd);
            if(gcd == 1) return 1;
        }
    }
    return gcd;

}

int main(void)
{
   int test;
   cin >> test;

   while(test--)
   {
       int n;
       cin >> n;
       vector <long long> v;

       for(int i=0; i<n; i++)
       {
           long long x;
           cin >> x;
           v.push_back(x);
       }

       long long oddGCD = getGCD(v, n, 1);
       long long evenGCD = getGCD(v, n, 0);

       for(int i=0; i<n; i+=2)
       {
           if((v[i] % oddGCD) == 0)
           {
               oddGCD = -1;
               break;
           }
       }

       for(int i=1; i<n; i+=2)
       {
           if((v[i] % evenGCD) == 0)
           {
               evenGCD = -1;
               break;
           }
       }

       if(oddGCD == -1 && evenGCD == -1) cout << 0 << "\n";
       else if (oddGCD == -1) cout << evenGCD << "\n";
       else cout << oddGCD << "\n";
   }
   return 0;
}
