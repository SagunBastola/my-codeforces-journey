#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll d, sumtime;
    cin >> d >> sumtime;
    ll mintime = 0, maxtime = 0;
    vector<pair<int, int>> vec(d);
    for(int i=0;i<d;i++)
    {
        int x,y;
        cin>>x>>y;
        vec[i].first=x;
        vec[i].second=y;
        mintime+=x;
        maxtime+=y;
    }
    if (sumtime < mintime || sumtime > maxtime)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < d; i++)
    {
        if (mintime + vec[i].second - vec[i].first >= sumtime)
        {
            vec[i].first += sumtime - mintime;
            break;
        }
        else
        {
            mintime += (vec[i].second - vec[i].first);
            vec[i].first = vec[i].second;
        }
    }
    for (int j = 0; j < d; j++)
    {
        cout << vec[j].first<<" ";
    }
}