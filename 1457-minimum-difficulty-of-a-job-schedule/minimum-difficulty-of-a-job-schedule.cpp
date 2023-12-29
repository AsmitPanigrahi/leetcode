#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minDifficulty(const vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();

        if (n < d) {
            return -1; // It's impossible to schedule the jobs in d days if there are fewer jobs than days.
        }

        vector<vector<int>> dp(n + 1, vector<int>(d + 1, numeric_limits<int>::max()));
        dp[0][0] = 0; // Base case: 0 jobs in 0 days

        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k <= d; ++k) {
                int maxDifficulty = 0;
                for (int j = i - 1; j >= k - 1; --j) {
                    maxDifficulty = max(maxDifficulty, jobDifficulty[j]);

                    // Check for integer overflow before updating dp[i][k]
                    if (dp[j][k - 1] != numeric_limits<int>::max() && maxDifficulty != numeric_limits<int>::max()) {
                        long long totalDifficulty = static_cast<long long>(dp[j][k - 1]) + maxDifficulty;
                        if (totalDifficulty <= numeric_limits<int>::max()) {
                            dp[i][k] = min(dp[i][k], static_cast<int>(totalDifficulty));
                        }
                    }
                }
            }
        }

        return dp[n][d] == numeric_limits<int>::max() ? -1 : dp[n][d];
    }
};
