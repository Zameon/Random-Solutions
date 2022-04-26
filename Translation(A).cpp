#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s, rev;
    bool flag = true;
    cin >> s >> rev;

    for(int i=0, j=s.length()-1; i<s.length(), j>=0; i++, j--)
    {
        if(s[i]!=rev[j])
        {
            flag = false;
            break;
        }
    }
    if(flag) printf("Yes\n");
    else printf("No\n");
    return 0;

}
