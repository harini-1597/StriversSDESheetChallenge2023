void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //transpose matrix first
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //then reverse each row
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
