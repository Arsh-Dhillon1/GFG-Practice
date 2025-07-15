class Solution {
  public:
    int longestCommonSubstr(string& x, string& y) {
        // your code here
        int n=x.size();
        int m=y.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(dp[i][j],ans);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return ans; 
    }
};