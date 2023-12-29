class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int count=0;
        int element;
        int n=nums.size();

        for (int i=0;i<n;i++)
        {
            if(count==0)
            {
                element=nums[i];
                count=1;
            }
            else if(element==nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        } 
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==element) count1++;
        }

        if(count1 > n/2)
        {
            return element;
        }
        else 
        {
            return -1;
        }
    }
};