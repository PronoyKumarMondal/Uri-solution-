#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < c)
        {
            c = a[i];
            count = (i + 1);
        }
    }
    cout << count << endl;

    return 0;
}
