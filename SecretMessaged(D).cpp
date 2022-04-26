#include <bits/stdc++.h>
using namespace std;


int main(void)
{
   int test;
   cin >> test;

   while(test--)
   {
       string s, ans="";
       char ch;
       cin >> s;

       for(int i=s.length(); i>=0; i--)
       {
           if(s[i]>='A' && s[i]<='Z')
           {
               if(s[i]<='M')
               {
                   ch = s[i] + 13 + 32;
                   ans = ans + ch;
               }
               else
               {
                   ch = s[i] - 13 + 32;
                   ans = ans + ch;
               }
           }
           else if(s[i]>='a' && s[i]<='z')
           {
               if(s[i]<='m')
               {
                   ch = s[i] + 13 - 32;
                   ans = ans + ch;
               }
               else
               {
                   ch = s[i] - 13 -32;
                   ans = ans + ch;
               }
       }
   }
   cout << ans << "\n";

}
return 0;
}
