#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
template<typename T>
ostream& operator<<(ostream& s,vector<T> &v)
{
    for(auto &x : v)
    {   
        s<<x<<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>
class Node
{
    public:
    Node* right;
    Node* left;
    char val;
    int count;
    Node(char val,int count)
    {
        this->val=val;
        this->count=count;
        this->right=nullptr;
        this->left=nullptr;
    }
};
Node* huffman()
{
    
}
void solve()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<pair<int,char>> freq;
    rep(i,0,s.size())
    {
        pair<int,char> p;
        p.second=s[i];
        p.first=1;
        i++;
        while(s[i-1] == s[i])
        {
            p.first++;
            i++;
        }
        i--;
        freq.push_back(p);
    }
    sort(freq.begin(),freq.end());

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}