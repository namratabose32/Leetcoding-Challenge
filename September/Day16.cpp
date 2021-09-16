class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n=matrix.size(),m=matrix[0].size();
        int l=0,r=m-1,u=0,d=n-1,i,j;
        while(l<=r && u<=d){
            i=l;
            j=u;
            while(i<=r){
                ans.push_back(matrix[j][i++]);
            }u++;
            i=r;
            j=u;
            while(j<=d){
                ans.push_back(matrix[j++][i]);
            }r--;
            i=d;
            j=r;
            if(u<=d){
                while(j>=l){
                    ans.push_back(matrix[i][j--]);
                }d--;
            }
            i=l;
            j=d;
            if(l<=r){
                while(j>=u){
                    ans.push_back(matrix[j--][i]);
                }l++;
            }
        }
        
        return ans;
    }
};
