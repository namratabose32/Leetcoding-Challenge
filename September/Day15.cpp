class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int ans=0;
        for(int i=0,c=0;i<arr.size()-1;i++,c*=-1){
            if(arr[i]>arr[i+1])
                c=c>0?++c:1;
            else if(arr[i]<arr[i+1])
                c=c<0?--c:-1;
            else
                c=0;
            ans=max(ans,abs(c));
        }return ans+1;
    }
};
