#include <bits/stdc++.h>
using namespace std;
 
bool onexists(map<int, int> occ)
{
    for(auto x: occ)
    {
        if(x.second==1) return true;
    }
    return false;
}
 
void solve()
{
    int n;
    map <int, vector<int> > mp;
    map <int, queue<int> > ans;
    map <int, int> occ;
    set <int> s;
        
    cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
        occ[arr[i]]++;
        s.insert(arr[i]);
        mp[arr[i]].push_back(i);
    }
    //permute the positions
 
    if (mp.size() == 1)
    {
        if(mp[arr[0]].size()==1) cout << "-1\n";
        
        else
        {
            int temp = mp[arr[0]][mp[arr[0]].size() - 1];
            for (int j = mp[arr[0]].size() - 1; j >= 1; j--) mp[arr[0]][j] = mp[arr[0]][j - 1];
            mp[arr[0]][0] = temp;
 
            for (int i = 0, cnt = 0; i < n; i++)
            {
                cout << mp[arr[0]][cnt++] + 1 << " ";
            }
            cout << "\n";
        }
 
        return;
    }
 
    else if(mp.size() == n)
    {
        printf("-1\n");
        return;
    }
    else
    {
        if(onexists(occ)) 
        {
            cout << "-1\n";
            return;
        }
        else
        {
            for(auto x : s)
            {
                int temp = mp[x][mp[x].size() - 1];
                for (int j = mp[x].size() - 1; j >= 1; j--) mp[x][j] = mp[x][j - 1];
                mp[x][0] = temp;

                for(auto f : mp[x]) ans[x].push(f);
            }
            
 
            for(int i=0; i<n; i++)
            {
                cout << ans[arr[i]].front() + 1 << " ";
                ans[arr[i]].pop();
                //cout << "\n";
            }
            cout << "\n";
 
            return;
        }
    }
    
    cout << "\n";
}
 
 
int main(void)
{
    int test;
    cin >> test;
 
    while(test--)
    {
        solve();
    }
 
    return 0;
}
 
