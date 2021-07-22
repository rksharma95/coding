class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bitset<10> b;
        //check row
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int x = board[i][j]-'0';
                if(x>=0 && x<=9){
                    if(b[x]){
                        return false;
                    }
                    b[x]=1;
                }
            }
            b.reset();
        }
        
        ////check column
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                int x = board[j][i]-'0';
                if(x>=0 && x<=9){
                    if(b[x]){
                        return false;
                    }
                    b[x]=1;
                }
            }
            b.reset();
        }
        
        //check each 3x3 grid
        for(int i=0;i<9;i+=3){
            for(int j=0; j<9;j++){
                if(j%3==0) b.reset();
                for(int k=i;k<i+3;k++){
                    int x = board[j][k]-'0';
                    if(x>=0 && x<=9){
                        if(b[x]){
                            return false;
                        }
                        b[x]=1;
                    }
                }
            }
        }
        return true;
    }
};