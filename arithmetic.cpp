#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max1 = max(a,max(b,c));
        int min1 = min(a, min(b, c));
        int sec;
        
        if (a != max1 && a != min1)
        {
            sec = a;
        }
        else if (b != max1 && b != min1)
        {
            sec = b;
        }
        else
        {
            sec = c;
        }
        if(min1 == 0 && sec == 0)
        {
            cout<<"YES"<<endl;
            cout<<max1<<" "<<0<<" "<<0<<endl;
            continue;
        }
        if (min1 * sec != max1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << min1 << " " << sec << " " << max1 << endl;
    }
}