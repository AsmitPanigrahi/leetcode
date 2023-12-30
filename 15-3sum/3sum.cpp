class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> output;

        for (int i=0;i<n-2;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int start=i+1;
            int end=n-1;

            while(start<end)
            {
                if(nums[i]+nums[start]+nums[end]==0)
                {
                    vector<int> branch;
                    branch.push_back(nums[i]);
                    branch.push_back(nums[start]);
                    branch.push_back(nums[end]);
                    output.push_back(branch);
                    while (start < end && nums[start] == nums[start + 1])
                        start++;
                    while (start < end && nums[end] == nums[end - 1])
                        end--;
                    start++;
                    end--;
                }
                else if(nums[i]+nums[start]+nums[end]>0)
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        return output;

    }
};