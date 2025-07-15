// User function template for C++

class Solution {
  public:
    // Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string &x, string &y) {
        // code here
        int n=x.size();
        int m=y.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        int lcs=dp[n][m];
        return m+n-lcs;
        
    }
};