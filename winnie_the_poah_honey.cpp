#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, k;
    in >> n >> k;

    vector<int> vec(n);
    for(int &x : vec)
        in >> x;

    for(int i = 0; i < n; i++)
    {
        int c = 3;
        while(c > 0 && vec[i] >= k)
        {
            vec[i] -= k;
            c--;
        }
    }

    long long sum = 0;
    for(int x : vec)
        sum += x;

    out << sum;
    return 0;
}
