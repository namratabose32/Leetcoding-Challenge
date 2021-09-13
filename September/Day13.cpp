class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> m;
        for(int i=0;i<text.length();i++){
            if(text[i]=='b' || text[i]=='a' || text[i]=='l' || text[i]=='o' || text[i]=='n')
                m[text[i]]++;
        }
        if(m.size()!=5)
            return 0;
        int ans=0,c=0;
        while(1){
            c=0;
            if(m.find('b')!=m.end() && m['b']>0){
                m['b']--;
                c++;
            }
            if(m.find('a')!=m.end() && m['a']>0){
                m['a']--;
                c++;
            }if(m.find('l')!=m.end()){
                if(m['l']>=2){
                    m['l']-=2;
                    c+=2;
                }else{
                    break;
                }
            }if(m.find('o')!=m.end()){
                if(m['o']>=2){
                    m['o']-=2;
                    c+=2;
                }else{
                    break;
                }
            }if(m.find('n')!=m.end() && m['n']>0){
                m['n']--;
                c++;
            }
            if(c==7)
                ans++;
            else
                break;
        }return ans;
    }
};
