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
 
        vector <int> odd, oddsort, even, evensort;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if(x%2==0) 
            {
                even.push_back(x);
                evensort.push_back(x);
            }
            else 
            {
                odd.push_back(x);
                oddsort.push_back(x);
            }
        }
 
        sort(evensort.begin(), evensort.end());
        sort(oddsort.begin(), oddsort.end());
 
        bool flag = false;
        
        if(even==evensort && odd==oddsort) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
 
    return 0;
}