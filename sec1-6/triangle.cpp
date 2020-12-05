#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] < a[i + 1] + a[i + 2])
        {
            cout << (a[i] + a[i + 1] + a[i + 2]) << endl;
            return 0;
        }
    }

    cout << "0" << endl;

    return 0;
}
