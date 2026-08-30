class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for(int i=0; i<n; i++){
            vector<int> freq(10,0);
            for(int j=0; j<n; j++){
                if(board[i][j]=='.') continue;
                int digit = board[i][j]-'0';
                freq[digit]++;
                if(freq[digit]>1) return false;
            }
        }
        for(int j=0; j<9; j++){
            vector<int> freq(10,0);
            for(int i=0; i<9; i++){
                if(board[i][j]=='.') continue;
                freq[board[i][j]-'0']++;
                if(freq[board[i][j]-'0']>1) return false;
            }
        }
        for(int i=0; i<9; i=i+3){
            for(int j=0; j<9; j=j+3){
                vector<int> freq(10,0);
                for(int row = i; row<i+3; row++){
                    for(int col = j; col<j+3; col++){
                        if(board[row][col]=='.') continue;
                        freq[board[row][col]-'0']++;
                        if(freq[board[row][col]-'0']>1) return false;
                    }
                }
            }
        }
        return true;
    }
};
