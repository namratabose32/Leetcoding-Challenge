class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,mx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
            }
            else{
                mx=max(mx,c);
                c=0;
            }
        }mx=max(c,mx);
        return mx;
    }
};
