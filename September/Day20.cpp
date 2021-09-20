class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
       vector<vector<int>> m(3,vector<int>(3));
        for(int i=0;i<moves.size();i++){
            if(i%2==0)
                m[moves[i][0]][moves[i][1]]='X';
            else
                m[moves[i][0]][moves[i][1]]='O';
        }int x,o;
        for(int i=0;i<3;i++){
            x=0,o=0;
            for(int j=0;j<3;j++){
                if(m[i][j]=='X')
                    x++;
                if(m[i][j]=='O')
                    o++;
            }if(x==3)
                return "A";
            if(o==3)
                return "B";
            x=0,o=0;
            for(int j=0;j<3;j++){
                if(m[j][i]=='X')
                    x++;
                if(m[j][i]=='O')
                    o++;
            }if(x==3)
                return "A";
            if(o==3)
                return "B";
        }
        if((m[0][0]=='X' && m[1][1]=='X' && m[2][2]=='X') || (m[0][2]=='X' && m[1][1]=='X' && m[2][0]=='X'))
            return "A";
        if((m[0][0]=='O' && m[1][1]=='O' && m[2][2]=='O') || (m[0][2]=='O' && m[1][1]=='O' && m[2][0]=='O'))
            return "B"; 
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(m[i][j]=='X')
                    continue;
                if(m[i][j]=='O')
                    continue;
                else{
                    return "Pending";
                }
            }
        }
        return "Draw";
    }
};
