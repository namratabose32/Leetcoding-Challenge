class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        unordered_map<int,int> s;
        vector<int> ans;
        if(n1>n2){
            for(int c: nums1)
                s[c]++;
            for(int c: nums2){
                if(s.find(c)!= s.end() && s[c]>0)
                    ans.push_back(c);
                s[c]--;
            }
        }else{
            for(int c: nums2)
                s[c]++;
            for(int c: nums1){
                if(s.find(c)!= s.end() && s[c]>0)
                    ans.push_back(c);
                s[c]--;
            }
        }return ans;
    }
};
