#include <bits/stdc++.h>
using namespace std;
int activitySelection(int start[], int end[], int n)
{
    int res = 1;
    int prev = 0;
    for (int i = 1; i < n; i++)
    {
        if (end[prev] <= start[i])
        {
            res++;
            prev = i;
        }
    }
    return res;
}
int main()
{
    int n;
    cout << "Enter Number of Activities:";
    cin >> n;
    int start[n];
    int end[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter StartTime: ";
        cin >> start[i];
        cout << "Enter EndTime: ";
        cin >> end[i];
    }
    int ans = activitySelection(start, end, n);
    cout <<ans<<endl;
}