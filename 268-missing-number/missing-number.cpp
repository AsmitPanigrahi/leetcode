class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        unordered_map<int, int> freq;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }

        for (int i=0;i<n;i++)
        {
            if(!freq.count(nums[i]+1) && nums[i]!=n)
            {
                return nums[i]+1;
            }
            else if(!freq.count(nums[i]-1) && nums[i]!=0)
            {
                return nums[i]-1;
            }
        }
        return -1;
    }
};