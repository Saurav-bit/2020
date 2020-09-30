
#include<bits/stdc++.h>
using namespace std;
void count(int arr[],int n)
{
    vector<bool>visit(n,false);
    for(int i=0;i<n;i++)
    {
        if(visit[i]==true)
            continue;
        int coun=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                visit[j]=true;
                coun++;

            }
        }
        cout<<arr[i]<<" "<<coun<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    count(arr,n);
    return 1;

}
