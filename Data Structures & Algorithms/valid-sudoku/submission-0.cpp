class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (auto row: board){
            unordered_set<char> seen;
            for (char alph:row){
                if (alph=='.'){
                    continue;
                }
                if (alph<'1'&& alph>'9'){
                    return false;
                }
                if (seen.count(alph)){
                    return false;
                }
                seen.insert(alph);
            }
 
        }
        for (int i=0;i<board.size();i++){
            unordered_set<char> seen;
            for (int j=0;j<board.size();j++){
                if (board[j][i]=='.'){
                    continue;
                }
                if (board[j][i]<'1' && board[j][i]>'9'){
                    return false;
                }
                if (seen.count(board[j][i])){
                    return false;
                }
                seen.insert(board[j][i]);
            }
        }
        for (int row = 0; row < 9; row += 3) {
           for (int col = 0; col < 9; col += 3) {
                unordered_set<char> seen;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char alph = board[row + i][col + j];
                        if (alph=='.'){
                           continue;
                        }
                        if (alph<'1'&& alph>'9'){
                           return false;
                        }
                        if (seen.count(alph)){
                           return false;
                        }
                        seen.insert(alph);
                    }
                    
                }
           }
        }
        return true;


    }
};
