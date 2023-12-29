#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;

        for (int i = 0; i < numRows; i++) {
            vector<int> row;  // Initialize a new vector for each row
            row.push_back(1); // First element is always 1

            for (int j = 1; j < i; j++) {
                int a = output[i - 1][j - 1];
                int b = output[i - 1][j];
                int sum = a + b;
                row.push_back(sum);
            }

            if (i > 0) {
                row.push_back(1); // Last element is always 1 except for the first row
            }

            output.push_back(row); // Add the row to the output vector
        }

        return output;
    }
};
