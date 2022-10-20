#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = (l - 1);

    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] < pivot)
        {
            cnt++;
            i++;
            swap(arr[i], arr[j]);
        }
    }
    cnt++;
    swap(arr[i + 1], arr[r]);
    return (i + 1);
}
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    cout << "Before Sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quickSort(arr, 0, n - 1);
    cout << "After Sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nNo of comparisons : " << cnt << endl;
}