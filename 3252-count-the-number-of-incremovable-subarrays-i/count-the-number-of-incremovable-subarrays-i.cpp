class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                bool flag = true;
                int last = -1;

                for (int k = 0; k < i; k++) {
                    if (last >= nums[k]) {
                        flag = false;
                        break;
                    }
                    last = nums[k];
                }

                for (int k = j + 1; k < n; k++) {
                    if (last >= nums[k]) {
                        flag = false;
                        break;
                    }
                    last = nums[k];
                }

                if (flag) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};