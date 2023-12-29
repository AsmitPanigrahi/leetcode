#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int, int> freq;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];

            if (freq.count(complement) > 0) {
                if (complement == nums[i] && freq[complement] > 1) {
                    // If the complement is the same as the current number
                    output.push_back(i);
                    for (int j = i + 1; j < n; j++) {
                        if (nums[j] == complement) {
                            output.push_back(j);
                            return output;
                        }
                    }
                } else if (complement != nums[i]) {
                    // If the complement is different
                    output.push_back(i);
                    for (int j = 0; j < n; j++) {
                        if (nums[j] == complement) {
                            output.push_back(j);
                            return output;
                        }
                    }
                }
            }
        }
        return output;
    }
};
