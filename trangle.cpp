#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(4);
    for(int& x : vec)
    {
        cin>>x;
    }
    sort(vec.begin(),vec.end());
    if(vec[0]+vec[1] > vec[2] || vec[1]+vec[2] > vec[3])
    {
        cout<<"TRIANGLE";
    }
    else if(vec[0]+vec[1] == vec[2] || vec[1]+vec[2] == vec[3])
    {
        cout<<"SEGMENT";
    }
    else{
        cout<<"IMPOSSIBLE";
    }
    cout<<endl;
    
}