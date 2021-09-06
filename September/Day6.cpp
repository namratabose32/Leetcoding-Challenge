class Solution {
public:
    char slowestKey(vector<int>& releaseTime, string keysPressed) {
        int mx=releaseTime[0],ans=0;
        for(int i=1;i<releaseTime.size();i++){
            int x=releaseTime[i]-releaseTime[i-1];
            if(mx<x){
                mx=x;
                ans=i;
            }if(mx==x && (int)keysPressed[ans]<(int)keysPressed[i]){
                mx=x;
                ans=i;
            }
        }return keysPressed[ans];
    }
};
