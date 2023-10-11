#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minValue = arr[0], noValue = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < minValue)
            {
                minValue = arr[j];
            }
        }
        if (k > minValue)
        {
            cout << k - minValue << endl;
        }
        else
        {
            cout << noValue << endl;
        }
    }
    return 0;
}