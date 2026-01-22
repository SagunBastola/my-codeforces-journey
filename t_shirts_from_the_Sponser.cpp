#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["S"]=0;
    m["M"]=1;
    m["L"]=2;
    m["XL"]=3;
    m["XXL"]=4;
    unordered_map<int,string> n2;
    n2[0]="S";
    n2[1]="M";
    n2[2]="L";
    n2[3]="XL";
    n2[4]="XXL";
    vector<int> vec(5);
    for(int& x : vec)
    {
        cin>>x;
    }
    int n;
    cin>>n;
    vector<string> size(n);
    for(int i=0;i<n;i++)
    {
        cin>>size[i];
    }
    vector<string> result(n);
    for(int i=0;i<n;i++)
    {   
        int a=m[size[i]];
        if(vec[a] > 0)
        {
            result[i]=size[i];
            vec[a]--;
            continue;
        }
        a=a+1;
        int b=a-2;
        while(a<5 || b>=0)
        {
            if(a<5 && vec[a] > 0)
            {
                result[i]=n2[a];
                vec[a]--;
                break;
            }
            else if(b>=0 && vec[b] > 0)
            {
                result[i]=n2[b];
                vec[b]--;
                break;
            }
            a++;
            b--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<endl;
    }
    
}