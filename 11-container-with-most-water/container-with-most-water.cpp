class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int start=0;
        int end=n-1;
        int maxm=0;

        while(start<end)
        {
            int distance=end-start;
            int high=min(height[start], height[end]);
            int area=(high) * (distance);
            maxm=max(area,maxm);

            if(height[start]>height[end])
            {
                end--;
            }
            else 
            {
                start++;
            }
        }
        return maxm;
    }
};