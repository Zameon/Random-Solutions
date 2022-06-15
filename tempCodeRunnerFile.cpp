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
    map<int, int> occ;
        
    cin >> n;
    int arr[n]; 
    bool vis[n+1] = {false};
    for(int i=0; i<n; i++) 
    {
        cin >> arr[i];
        occ[arr[i]]++;
        mp[arr[i]].push_back(i);
    }
    //permute the positions

    if (mp.size() == 1)
    {
        int temp = mp[arr[0]][mp[arr[0]].size() - 1];
        for (int j = mp[arr[0]].size() - 1; j >= 1; j--) mp[arr[0]][j] = mp[arr[0]][j - 1];
        mp[arr[0]][0] = temp;

        for (int i = 0, cnt = 0; i < n; i++)
        {
            cout << mp[arr[0]][cnt++] + 1 << " ";
        }
        cout << "\n";

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
            for(int i=0; i<n; i++)
            {
                if (!vis[arr[i]])
                {
                    //cout << "dhukse\n";
                    int temp = mp[arr[i]][mp[arr[i]].size() - 1];
                    //ans[arr[i]].push(temp);
                    for (int j = mp[arr[i]].size() - 1; j >= 1; j--) mp[arr[i]][j] = mp[arr[i]][j - 1];
                    mp[arr[i]][0] = temp;

                    for(auto x : mp[arr[i]]) ans[arr[i]].push(x);
                    vis[arr[i]] = true;
                }
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
    
    

    /*for(auto x : mp)
    {
        cout << "Element: " << x.first << "\n";
        cout << "Permuted: ";
        for(int i=0; i<x.second.size(); i++) cout << x.second[i] << " ";
        /*while(!x.second.empty())
        {
            cout << x.second.front() << " ";
            x.second.pop();
        }*/
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

/*int main(void)
{
    map<int, vector<int> > mp;
    mp.insert({2, {1, 2, 3, 4}});
    
    int temp = mp[2][mp[2].size()-1];
    for(int i=mp[2].size()-1; i>=1; i--) mp[2][i] = mp[2][i-1];
    mp[2][0] = temp;

    for (int i=0, cnt = 0; i<4; i++)
    {
        cout << mp[2][cnt++] << " ";
    }
}*/