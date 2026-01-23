#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<vector<ll>> vec(n, vector<ll>(3));
        for (vector<ll> &ve : vec)
        {
            cin >> ve[0] >> ve[1] >> ve[2];
        }

        ll ans = -1;
        ll found = false;

        for (int i = 0; i < n; i++)
        {
            int jmp=vec[i][0];
            int st=vec[i][1];
            int d=vec[i][2];
            int cur_x=x;
            ll cnt=0;
            ll k=0;
            if(jmp * st <= d && jmp*(st-1) < cur_x)
            {
                continue;
            }
            while(cur_x > 0)
            {
                cnt++;
                cur_x-=jmp;
                if(cnt%st == 0)
                {
                    k++;
                    cur_x+=d;
                }
                if(cur_x <= 0)
                {
                    break;
                }
            }
            if(cur_x <= 0)
            {
                if(!found || k < ans)
                {
                    ans=k;
                    found=true;
                }
            }
        }
        cout<<ans<<endl;
    }
}