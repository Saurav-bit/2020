#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {cin>>arr[i];

      cin.sync();
        }
    cout<<"b4 sort";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    //sort(arr,arr+n);
    sort(arr,arr+n,greater<int>());
    cout<<"after sort";
    for(int i=0;i<n;i++)
        cout<<arr[i];

    return 1;
}
