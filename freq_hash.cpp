#include<bits/stdc++.h>
using namespace std;
void frqcnt(int arr[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    //for(auto x:mp)
       //cout<<x.first<<" "<<x.second<<endl;
        for (int i = 0; i < n; i++) {
      if (mp[arr[i]] != -1)
      {
          cout << arr[i] << " " << mp[arr[i]] << endl;
          mp[arr[i]] = -1;
      }
}
}

void findSymPairs(int arr[][2], int row) 
{ 
    // Creates an empty hashMap hM 
    unordered_map<int, int> hM; 
  
    // Traverse through the given array 
    for (int i = 0; i < row; i++) 
    { 
        // First and second elements of current pair 
        int first = arr[i][0]; 
        int sec   = arr[i][1]; 
  
        // If found and value in hash matches with first 
        // element of this pair, we found symmetry 
        if (hM.find(sec) != hM.end() && hM[sec] == first) 
            cout << "(" << sec << ", " << first << ")" <<endl; 
  
        else  // Else put sec element of this pair in hash 
            hM[first] = sec; 
    } 
} 
  

int main()
{
    int n;

    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
   frqcnt(arr,n);
    return 1;

}
