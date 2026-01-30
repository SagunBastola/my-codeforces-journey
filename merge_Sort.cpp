#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
void merge1(vector<int> &a, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (a[i] > a[j])
        {
            int value = a[j];
            int index = j;

            while (index != i)
            {
                a[index] = a[index - 1];
                index--;
            }
            a[i] = value;

            i++;
            mid++;
            j++;
        }
        else
        {
            i++;
        }
    }
}
void merge(vector<int> &a, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        merge(a, start, mid);
        merge(a, mid + 1, end);
        merge1(a, start, mid, end);
    }
}
int main()
{
    vi a = {1, 6, 4, 2, 4, 6, 3};
    merge(a, 0, 6);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}