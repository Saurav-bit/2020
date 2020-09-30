#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

#define pb push_back

const int M = 3;

double maxavg(int cost[][M]){
	int N = M;
	
	 int dp[N+1][N+1]; 
    dp[0][0] = cost[0][0]; 
  
    /* Initialize first column of total cost(dp) array */
    for (int i = 1; i < N; i++) 
        dp[i][0] = dp[i-1][0] + cost[i][0]; 
  
    /* Initialize first row of dp array */
    for (int j = 1; j < N; j++) 
        dp[0][j] = dp[0][j-1] + cost[0][j]; 
  
    /* Construct rest of the dp array */
    for (int i = 1; i < N; i++) 
        for (int j = 1; j <= N; j++) 
            dp[i][j] = max(dp[i-1][j], 
                          dp[i][j-1]) + cost[i][j]; 
  
    // divide maximum sum by constant path 
    // length : (2N - 1) for getting average 
    return (double)dp[N-1][N-1] / (2*N-1);
}


int main(int argc, char const *argv[])
{	

	int cost[M][M] = { {1, 2, 3}, 
        {6, 5, 4}, 
        {7, 3, 9} 
    }; 
    cout << maxavg(cost) << endl;


	return 0;
}
