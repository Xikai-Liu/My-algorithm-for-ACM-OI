class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=1; int lent=nums.size();
        if (lent<=1) return lent;
        for (int i=1;i<lent;i++){
            if (nums[i-1]!=nums[i]) nums[ans]=nums[i],ans++;
        }
        return ans;
    }
};
