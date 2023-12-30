class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int start=0;
        int end=n-1;

        while(start<=end)  
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }

            else if(nums[mid]>=nums[start])
            {
                int bistart=start;
                int biend=mid;

                while(bistart<=biend)
                {
                    int bimid=(bistart+biend)/2;
                    if(nums[bimid]==target) 
                    {
                        return bimid;
                    }
                    else if(nums[bimid]>target)
                    {
                        biend=bimid-1;
                    }
                    else
                    {
                        bistart=bimid+1;
                    }
                }
                start=mid+1;               
            }
            else
            {
                int bistart=mid;
                int biend=end;

                while(bistart<=biend)
                {
                    int bimid=(bistart+biend)/2;
                    if(nums[bimid]==target) 
                    {
                        return bimid;
                    }
                    else if(nums[bimid]>target)
                    {
                        biend=bimid-1;
                    }
                    else
                    {
                        bistart=bimid+1;
                    }
                }
                end=mid-1;
            }
            
        }  
        return -1;
    }
};