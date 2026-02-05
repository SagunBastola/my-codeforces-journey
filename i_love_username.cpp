#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int& x : vec)
    {
        cin>>x;

    }
    int points=0;
    int max1=vec[0];
    int min1=vec[0];
    for(int i=1;i<n;i++)
    {
        if(vec[i]<min1)
        {
            min1=vec[i];
            points++;
        }
        else if(vec[i]>max1)
        {
            max1=vec[i];
            points++;
        }
    }
    cout<<points<<endl;
}