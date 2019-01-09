//n floors, k eggs

/*
    Brute Force Approach for Egg Drop Problem.
    Dynamic Programming
*/

int eggDrop(int n, int k)
{
    
    int dp[1+n][1+k];
    
    for(int i=0; i<=n; ++i)
    {
       // dp[i][0] = i;
        dp[i][1] = i;
    }
    
    for(int j = 2; j<=k; ++j)
        dp[1][j] = 1;
    
   // for()
    
    for(int i=2; i<=n; ++i)
    {
        for(int j=2; j<=k; ++j)
        {
            if(j>=i)
                 dp[i][j] = dp[i][j-1];
            
            else
            {
                int mini = INT_MAX, res;
    
                for(int ii=1; ii<=i; ++ii)
                {
                    res = max(dp[ii-1][j-1], dp[i-ii][j]);
                    if(res<mini) mini = res;
                }
                
                dp[i][j] = 1 + mini;
            }
        }
    }
    
     
    
    return dp[n][k];
}



class Solution {
public:
    int superEggDrop(int K, int N) {
        return eggDrop(N, K);
        
    }
};