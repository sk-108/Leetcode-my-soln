class Solution {
public:
    bool check(vector<int>& nums) {
        int pivot = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] < nums[i-1])
            {
                pivot = i;
                break;
            }
        }
        if(pivot == 0)
        {
            return true;
        }
        vector<int>ans;
        for(int i=pivot;i<nums.size();i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i=0;i<pivot;i++)
        {
            ans.push_back(nums[i]);
        }
        
        //checking
        for(int i=0;i<nums.size()-1;i++)
        {
            if(ans[i+1] < ans[i])
            {
                return false;
            }
        }
        return true;
    }
};