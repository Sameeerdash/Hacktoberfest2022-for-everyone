#include <iostream>
using namespace std;
void insertionSort(int *arr,int n){
    int count=0;
    for(int j=1;j<n;++j){
        int key=arr[j];
        int i=j-1;
        for(;i>=0&&arr[i]>key;--i,count++)
            arr[i+1]=arr[i];
            
        arr[i+1]=key;
    }
    cout<<"count value:-"<<count<<"\n";


}
int main()
{
    cout << "Enter the array size:-";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i << "element:-";
        cin >> arr[i];
    }
    insertionSort(arr,n);
    for (int i = 0; i < n;i++)
    {
        cout<<arr[i];
    }
}