class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        shifts[shifts.size()-1]%=26;
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]%=26;
            shifts[i]+=shifts[i+1];
        }
        string ans;
        for(int i=0;i<s.length();i++){
            shifts[i]%=26;
            int x=(s[i]-'a'+1+shifts[i]);
            if(x>26){
                x=x%26;
            }if(x==0)
                ans+='z';
            else
                ans+=x+'a'-1;
        }return ans;
    }
};
