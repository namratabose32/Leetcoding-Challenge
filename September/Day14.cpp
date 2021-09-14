class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        vector<int> ch;
        for(auto c:s){
            if(c>='a' && c<='z')
                ch.push_back(c);
            else if(c>='A' && c<='Z')
                ch.push_back(c);
        }
        int a=ch.size()-1;
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z')
                ans+=ch[a--];
            else if(s[i]>='A' && s[i]<='Z')
                ans+=ch[a--];
            else
                ans+=s[i];
        }return ans;
    }
};
