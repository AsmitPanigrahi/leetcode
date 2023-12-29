#include<bits/stdc++.h>

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> freq;
        vector<int> output;
        int n1=nums1.size();
        int n2=nums2.size();

        for (int i=0;i<n1;i++)
        {
            freq[nums1[i]]++;
        } 
        for (int i=0;i<n2;i++)
        {
            if(freq[nums2[i]] > 0)
            {
                output.push_back(nums2[i]);
                freq[nums2[i]]--;
            }
        }  
        return output; 
    }
};