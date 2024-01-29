#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n,greater<int>());
    int prefixsum[n];
    prefixsum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (prefixsum[i] > (double)sum / 2)
        {
            cout << i + 1 << endl;
            break;
        }
    }
   

    return 0;
}
 