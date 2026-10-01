class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.') {
                    continue;
                }

                // rows
                for(int k = 0; k < 9; k++) {
                    if(k != j && board[i][j] == board[i][k]) {
                        return false;
                    }
                }

                // cols
                for(int k = 0; k < 9; k++) {
                    if(k != i && board[i][j] == board[k][j]) {
                        return false;
                    }
                }

                // 3x3 box
                int x = (i / 3) * 3;
                int y = (j / 3) * 3;

                for(int r = x; r < x + 3; r++) {
                    for(int s = y; s < y + 3; s++) {
                        if((r != i || s != j) &&
                           board[r][s] == board[i][j]) {
                            return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};