#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int minDistance(std::string word1, std::string word2) {
        int len1 = word1.length();
        int len2 = word2.length();

        // Create a DP table
        std::vector<std::vector<int>> dp(len1 + 1, std::vector<int>(len2 + 1, 0));

        // Fill the base cases for empty strings
        for (int i = 0; i <= len1; ++i) {
            dp[i][0] = i;
        }
        for (int j = 0; j <= len2; ++j) {
            dp[0][j] = j;
        }

        // Fill the DP table
        for (int i = 1; i <= len1; ++i) {
            for (int j = 1; j <= len2; ++j) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1]; // Characters match so no changes are needed
                } else {
                    int insertCost = dp[i][j - 1];   // Insert
                    int deleteCost = dp[i - 1][j];   // Delete
                    int replaceCost = dp[i - 1][j - 1]; // Replace
                    dp[i][j] = 1 + std::min({insertCost, deleteCost, replaceCost}); // Use the one that costs the least
                }
            }
        }

        // Return the minimum distance in the bottom right spot
        return dp[len1][len2];
};

int main() {
    // Test strings
    std::string word1 = "horse";
    std::string word2 = "ros";

    // Call the minDistance function and save the result
    int result = minDistance(word1, word2);

    // Display the result
    std::cout << "The minimum number of operations to convert is: " << result << std::endl;

    return 0;
}
