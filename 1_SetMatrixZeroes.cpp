//LC 73 https://leetcode.com/problems/set-matrix-zeroes/
//https://takeuforward.org/data-structure/set-matrix-zero/

// Brute Force
class Solution {
private:
    void markRow(vector<vector<int>> &matrix, int rowsize, int j){
        for(int i=0; i<rowsize; i++){
            if(matrix[i][j]!=0)
                matrix[i][j]='x';
        }
    }
    void markCol(vector<vector<int>> &matrix, int colsize, int i){
        for(int j=0; j<colsize; j++){
            if(matrix[i][j]!=0)
                matrix[i][j]='x';
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(); int c=matrix[0].size();
        int flag=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    flag=1;
                    markRow(matrix,r,j);
                    markCol(matrix,c,i);
                }
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]=='x')
                    matrix[i][j]=0;
            }
        }
    }
};

//Slightly Optimized
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(); int c=matrix[0].size();
        vector<int> rows(r,0); vector<int> cols(c,0);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(rows[i]){
                    matrix[i][j]=0;
                }
                if(cols[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};

// Optimal
