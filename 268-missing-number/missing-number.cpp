class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int sum01=n;
        int sum02=0;
        for (int i=0;i<n;i++)
        {
            sum01+=i;
            sum02+=nums[i];
        }
        return sum01-sum02;
    }
};